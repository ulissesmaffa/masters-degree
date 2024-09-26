#include "hls_signal_handler.h"
#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"
using namespace std;

namespace hls::sim
{
  template<size_t n>
  struct Byte {
    unsigned char a[n];

    Byte()
    {
      for (size_t i = 0; i < n; ++i) {
        a[i] = 0;
      }
    }

    template<typename T>
    Byte<n>& operator= (const T &val)
    {
      std::memcpy(a, &val, n);
      return *this;
    }
  };

  struct SimException : public std::exception {
    const std::string msg;
    const size_t line;
    SimException(const std::string &msg, const size_t line)
      : msg(msg), line(line)
    {
    }
  };

  void errExit(const size_t line, const std::string &msg)
  {
    std::string s;
    s += "ERROR";
//  s += '(';
//  s += __FILE__;
//  s += ":";
//  s += std::to_string(line);
//  s += ')';
    s += ": ";
    s += msg;
    s += "\n";
    fputs(s.c_str(), stderr);
    exit(1);
  }
}


namespace hls::sim
{
  struct Buffer {
    char *first;
    Buffer(char *addr) : first(addr)
    {
    }
  };

  struct DBuffer : public Buffer {
    static const size_t total = 1<<10;
    size_t ufree;

    DBuffer(size_t usize) : Buffer(nullptr), ufree(total)
    {
      first = new char[usize*ufree];
    }

    ~DBuffer()
    {
      delete[] first;
    }
  };

  struct CStream {
    char *front;
    char *back;
    size_t num;
    size_t usize;
    std::list<Buffer*> bufs;
    bool dynamic;

    CStream() : front(nullptr), back(nullptr),
                num(0), usize(0), dynamic(true)
    {
    }

    ~CStream()
    {
      for (Buffer *p : bufs) {
        delete p;
      }
    }

    template<typename T>
    T* data()
    {
      return (T*)front;
    }

    template<typename T>
    void transfer(hls::stream<T> *param)
    {
      while (!empty()) {
        param->write(*(T*)nextRead());
      }
    }

    bool empty();
    char* nextRead();
    char* nextWrite();
  };

  bool CStream::empty()
  {
    return num == 0;
  }

  char* CStream::nextRead()
  {
    assert(num > 0);
    char *res = front;
    front += usize;
    if (dynamic) {
      if (++static_cast<DBuffer*>(bufs.front())->ufree == DBuffer::total) {
        if (bufs.size() > 1) {
          bufs.pop_front();
          front = bufs.front()->first;
        } else {
          front = back = bufs.front()->first;
        }
      }
    }
    --num;
    return res;
  }

  char* CStream::nextWrite()
  {
    if (dynamic) {
      if (static_cast<DBuffer*>(bufs.back())->ufree == 0) {
        bufs.push_back(new DBuffer(usize));
        back = bufs.back()->first;
      }
      --static_cast<DBuffer*>(bufs.back())->ufree;
    }
    char *res = back;
    back += usize;
    ++num;
    return res;
  }

  std::list<CStream> streams;
  std::map<char*, CStream*> prebuilt;

  CStream* createStream(size_t usize)
  {
    streams.emplace_front();
    CStream &s = streams.front();
    {
      s.dynamic = true;
      s.bufs.push_back(new DBuffer(usize));
      s.front = s.bufs.back()->first;
      s.back = s.front;
      s.num = 0;
      s.usize = usize;
    }
    return &s;
  }

  template<typename T>
  CStream* createStream(hls::stream<T> *param)
  {
    CStream *s = createStream(sizeof(T));
    {
      s->dynamic = true;
      while (!param->empty()) {
        T data = param->read();
        memcpy(s->nextWrite(), (char*)&data, sizeof(T));
      }
      prebuilt[s->front] = s;
    }
    return s;
  }

  template<typename T>
  CStream* createStream(T *param, size_t usize)
  {
    streams.emplace_front();
    CStream &s = streams.front();
    {
      s.dynamic = false;
      s.bufs.push_back(new Buffer((char*)param));
      s.front = s.back = s.bufs.back()->first;
      s.usize = usize;
      s.num = ~0UL;
    }
    prebuilt[s.front] = &s;
    return &s;
  }

  CStream* findStream(char *buf)
  {
    return prebuilt.at(buf);
  }
}
class AESL_RUNTIME_BC {
  public:
    AESL_RUNTIME_BC(const char* name) {
      file_token.open( name);
      if (!file_token.good()) {
        cout << "Failed to open tv file " << name << endl;
        exit (1);
      }
      file_token >> mName;//[[[runtime]]]
    }
    ~AESL_RUNTIME_BC() {
      file_token.close();
    }
    int read_size () {
      int size = 0;
      file_token >> mName;//[[transaction]]
      file_token >> mName;//transaction number
      file_token >> mName;//pop_size
      size = atoi(mName.c_str());
      file_token >> mName;//[[/transaction]]
      return size;
    }
  public:
    fstream file_token;
    string mName;
};
unsigned int ap_apatb_SLI_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_data_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_keep_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_strb_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_user_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_last_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_id_V.dat");
unsigned int ap_apatb_SLI_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_SLI_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_in_SLI_AXIS_V_dest_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_data_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_keep_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_strb_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_user_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_last_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_id_V.dat");
unsigned int ap_apatb_MRI_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MRI_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_out_MRI_AXIS_V_dest_V.dat");
unsigned int ap_apatb_STW_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_data_V.dat");
unsigned int ap_apatb_STW_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_keep_V.dat");
unsigned int ap_apatb_STW_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_strb_V.dat");
unsigned int ap_apatb_STW_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_user_V.dat");
unsigned int ap_apatb_STW_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_last_V.dat");
unsigned int ap_apatb_STW_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_id_V.dat");
unsigned int ap_apatb_STW_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STW_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_in_STW_AXIS_V_dest_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_data_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_keep_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_strb_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_user_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_last_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_id_V.dat");
unsigned int ap_apatb_MBW_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBW_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_out_MBW_AXIS_V_dest_V.dat");
unsigned int ap_apatb_STA_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_data_V.dat");
unsigned int ap_apatb_STA_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_keep_V.dat");
unsigned int ap_apatb_STA_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_strb_V.dat");
unsigned int ap_apatb_STA_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_user_V.dat");
unsigned int ap_apatb_STA_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_last_V.dat");
unsigned int ap_apatb_STA_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_id_V.dat");
unsigned int ap_apatb_STA_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_STA_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_in_STA_AXIS_V_dest_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_data_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_data_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_data_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_keep_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_keep_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_keep_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_strb_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_strb_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_strb_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_user_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_user_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_user_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_last_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_last_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_last_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_id_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_id_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_id_V.dat");
unsigned int ap_apatb_MBA_AXIS_V_dest_V_cap_bc;
static AESL_RUNTIME_BC __xlx_MBA_AXIS_V_dest_V_V_size_Reader("../tv/stream_size/stream_size_out_MBA_AXIS_V_dest_V.dat");
using hls::sim::Byte;
extern "C" void pe(volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *);
extern "C" void apatb_pe_hw(volatile void * __xlx_apatb_param_SLI_AXIS_V_data_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_keep_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_strb_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_user_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_last_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_id_V, volatile void * __xlx_apatb_param_SLI_AXIS_V_dest_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_data_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_keep_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_strb_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_user_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_last_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_id_V, volatile void * __xlx_apatb_param_MRI_AXIS_V_dest_V, volatile void * __xlx_apatb_param_STW_AXIS_V_data_V, volatile void * __xlx_apatb_param_STW_AXIS_V_keep_V, volatile void * __xlx_apatb_param_STW_AXIS_V_strb_V, volatile void * __xlx_apatb_param_STW_AXIS_V_user_V, volatile void * __xlx_apatb_param_STW_AXIS_V_last_V, volatile void * __xlx_apatb_param_STW_AXIS_V_id_V, volatile void * __xlx_apatb_param_STW_AXIS_V_dest_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_data_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_keep_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_strb_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_user_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_last_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_id_V, volatile void * __xlx_apatb_param_MBW_AXIS_V_dest_V, volatile void * __xlx_apatb_param_STA_AXIS_V_data_V, volatile void * __xlx_apatb_param_STA_AXIS_V_keep_V, volatile void * __xlx_apatb_param_STA_AXIS_V_strb_V, volatile void * __xlx_apatb_param_STA_AXIS_V_user_V, volatile void * __xlx_apatb_param_STA_AXIS_V_last_V, volatile void * __xlx_apatb_param_STA_AXIS_V_id_V, volatile void * __xlx_apatb_param_STA_AXIS_V_dest_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_data_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_keep_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_strb_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_user_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_last_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_id_V, volatile void * __xlx_apatb_param_MBA_AXIS_V_dest_V) {
using hls::sim::createStream;
auto* sSLI_AXIS_V_data_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_data_V);
auto* sSLI_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_keep_V);
auto* sSLI_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_strb_V);
auto* sSLI_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_user_V);
auto* sSLI_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_last_V);
auto* sSLI_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_id_V);
auto* sSLI_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_dest_V);
  //Create input buffer for MRI_AXIS_V_data_V
  ap_apatb_MRI_AXIS_V_data_V_cap_bc = __xlx_MRI_AXIS_V_data_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_data_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_data_V_cap_bc];
auto* sMRI_AXIS_V_data_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_data_V);
  //Create input buffer for MRI_AXIS_V_keep_V
  ap_apatb_MRI_AXIS_V_keep_V_cap_bc = __xlx_MRI_AXIS_V_keep_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_keep_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_keep_V_cap_bc];
auto* sMRI_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_keep_V);
  //Create input buffer for MRI_AXIS_V_strb_V
  ap_apatb_MRI_AXIS_V_strb_V_cap_bc = __xlx_MRI_AXIS_V_strb_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_strb_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_strb_V_cap_bc];
auto* sMRI_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_strb_V);
  //Create input buffer for MRI_AXIS_V_user_V
  ap_apatb_MRI_AXIS_V_user_V_cap_bc = __xlx_MRI_AXIS_V_user_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_user_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_user_V_cap_bc];
auto* sMRI_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_user_V);
  //Create input buffer for MRI_AXIS_V_last_V
  ap_apatb_MRI_AXIS_V_last_V_cap_bc = __xlx_MRI_AXIS_V_last_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_last_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_last_V_cap_bc];
auto* sMRI_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_last_V);
  //Create input buffer for MRI_AXIS_V_id_V
  ap_apatb_MRI_AXIS_V_id_V_cap_bc = __xlx_MRI_AXIS_V_id_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_id_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_id_V_cap_bc];
auto* sMRI_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_id_V);
  //Create input buffer for MRI_AXIS_V_dest_V
  ap_apatb_MRI_AXIS_V_dest_V_cap_bc = __xlx_MRI_AXIS_V_dest_V_V_size_Reader.read_size();
  char* __xlx_MRI_AXIS_V_dest_V_input_buffer= new char[ap_apatb_MRI_AXIS_V_dest_V_cap_bc];
auto* sMRI_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_dest_V);
auto* sSTW_AXIS_V_data_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_data_V);
auto* sSTW_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_keep_V);
auto* sSTW_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_strb_V);
auto* sSTW_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_user_V);
auto* sSTW_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_last_V);
auto* sSTW_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_id_V);
auto* sSTW_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_dest_V);
  //Create input buffer for MBW_AXIS_V_data_V
  ap_apatb_MBW_AXIS_V_data_V_cap_bc = __xlx_MBW_AXIS_V_data_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_data_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_data_V_cap_bc];
auto* sMBW_AXIS_V_data_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_data_V);
  //Create input buffer for MBW_AXIS_V_keep_V
  ap_apatb_MBW_AXIS_V_keep_V_cap_bc = __xlx_MBW_AXIS_V_keep_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_keep_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_keep_V_cap_bc];
auto* sMBW_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_keep_V);
  //Create input buffer for MBW_AXIS_V_strb_V
  ap_apatb_MBW_AXIS_V_strb_V_cap_bc = __xlx_MBW_AXIS_V_strb_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_strb_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_strb_V_cap_bc];
auto* sMBW_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_strb_V);
  //Create input buffer for MBW_AXIS_V_user_V
  ap_apatb_MBW_AXIS_V_user_V_cap_bc = __xlx_MBW_AXIS_V_user_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_user_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_user_V_cap_bc];
auto* sMBW_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_user_V);
  //Create input buffer for MBW_AXIS_V_last_V
  ap_apatb_MBW_AXIS_V_last_V_cap_bc = __xlx_MBW_AXIS_V_last_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_last_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_last_V_cap_bc];
auto* sMBW_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_last_V);
  //Create input buffer for MBW_AXIS_V_id_V
  ap_apatb_MBW_AXIS_V_id_V_cap_bc = __xlx_MBW_AXIS_V_id_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_id_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_id_V_cap_bc];
auto* sMBW_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_id_V);
  //Create input buffer for MBW_AXIS_V_dest_V
  ap_apatb_MBW_AXIS_V_dest_V_cap_bc = __xlx_MBW_AXIS_V_dest_V_V_size_Reader.read_size();
  char* __xlx_MBW_AXIS_V_dest_V_input_buffer= new char[ap_apatb_MBW_AXIS_V_dest_V_cap_bc];
auto* sMBW_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_dest_V);
auto* sSTA_AXIS_V_data_V = createStream((hls::stream<short>*)__xlx_apatb_param_STA_AXIS_V_data_V);
auto* sSTA_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_keep_V);
auto* sSTA_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_strb_V);
auto* sSTA_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_user_V);
auto* sSTA_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_last_V);
auto* sSTA_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_id_V);
auto* sSTA_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_dest_V);
  //Create input buffer for MBA_AXIS_V_data_V
  ap_apatb_MBA_AXIS_V_data_V_cap_bc = __xlx_MBA_AXIS_V_data_V_V_size_Reader.read_size();
  short* __xlx_MBA_AXIS_V_data_V_input_buffer= new short[ap_apatb_MBA_AXIS_V_data_V_cap_bc];
auto* sMBA_AXIS_V_data_V = createStream((hls::stream<short>*)__xlx_apatb_param_MBA_AXIS_V_data_V);
  //Create input buffer for MBA_AXIS_V_keep_V
  ap_apatb_MBA_AXIS_V_keep_V_cap_bc = __xlx_MBA_AXIS_V_keep_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_keep_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_keep_V_cap_bc];
auto* sMBA_AXIS_V_keep_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_keep_V);
  //Create input buffer for MBA_AXIS_V_strb_V
  ap_apatb_MBA_AXIS_V_strb_V_cap_bc = __xlx_MBA_AXIS_V_strb_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_strb_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_strb_V_cap_bc];
auto* sMBA_AXIS_V_strb_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_strb_V);
  //Create input buffer for MBA_AXIS_V_user_V
  ap_apatb_MBA_AXIS_V_user_V_cap_bc = __xlx_MBA_AXIS_V_user_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_user_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_user_V_cap_bc];
auto* sMBA_AXIS_V_user_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_user_V);
  //Create input buffer for MBA_AXIS_V_last_V
  ap_apatb_MBA_AXIS_V_last_V_cap_bc = __xlx_MBA_AXIS_V_last_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_last_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_last_V_cap_bc];
auto* sMBA_AXIS_V_last_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_last_V);
  //Create input buffer for MBA_AXIS_V_id_V
  ap_apatb_MBA_AXIS_V_id_V_cap_bc = __xlx_MBA_AXIS_V_id_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_id_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_id_V_cap_bc];
auto* sMBA_AXIS_V_id_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_id_V);
  //Create input buffer for MBA_AXIS_V_dest_V
  ap_apatb_MBA_AXIS_V_dest_V_cap_bc = __xlx_MBA_AXIS_V_dest_V_V_size_Reader.read_size();
  char* __xlx_MBA_AXIS_V_dest_V_input_buffer= new char[ap_apatb_MBA_AXIS_V_dest_V_cap_bc];
auto* sMBA_AXIS_V_dest_V = createStream((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_dest_V);
  // DUT call
  pe(sSLI_AXIS_V_data_V->data<char>(), sSLI_AXIS_V_keep_V->data<char>(), sSLI_AXIS_V_strb_V->data<char>(), sSLI_AXIS_V_user_V->data<char>(), sSLI_AXIS_V_last_V->data<char>(), sSLI_AXIS_V_id_V->data<char>(), sSLI_AXIS_V_dest_V->data<char>(), sMRI_AXIS_V_data_V->data<char>(), sMRI_AXIS_V_keep_V->data<char>(), sMRI_AXIS_V_strb_V->data<char>(), sMRI_AXIS_V_user_V->data<char>(), sMRI_AXIS_V_last_V->data<char>(), sMRI_AXIS_V_id_V->data<char>(), sMRI_AXIS_V_dest_V->data<char>(), sSTW_AXIS_V_data_V->data<char>(), sSTW_AXIS_V_keep_V->data<char>(), sSTW_AXIS_V_strb_V->data<char>(), sSTW_AXIS_V_user_V->data<char>(), sSTW_AXIS_V_last_V->data<char>(), sSTW_AXIS_V_id_V->data<char>(), sSTW_AXIS_V_dest_V->data<char>(), sMBW_AXIS_V_data_V->data<char>(), sMBW_AXIS_V_keep_V->data<char>(), sMBW_AXIS_V_strb_V->data<char>(), sMBW_AXIS_V_user_V->data<char>(), sMBW_AXIS_V_last_V->data<char>(), sMBW_AXIS_V_id_V->data<char>(), sMBW_AXIS_V_dest_V->data<char>(), sSTA_AXIS_V_data_V->data<short>(), sSTA_AXIS_V_keep_V->data<char>(), sSTA_AXIS_V_strb_V->data<char>(), sSTA_AXIS_V_user_V->data<char>(), sSTA_AXIS_V_last_V->data<char>(), sSTA_AXIS_V_id_V->data<char>(), sSTA_AXIS_V_dest_V->data<char>(), sMBA_AXIS_V_data_V->data<short>(), sMBA_AXIS_V_keep_V->data<char>(), sMBA_AXIS_V_strb_V->data<char>(), sMBA_AXIS_V_user_V->data<char>(), sMBA_AXIS_V_last_V->data<char>(), sMBA_AXIS_V_id_V->data<char>(), sMBA_AXIS_V_dest_V->data<char>());
sSLI_AXIS_V_data_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_data_V);
sSLI_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_keep_V);
sSLI_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_strb_V);
sSLI_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_user_V);
sSLI_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_last_V);
sSLI_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_id_V);
sSLI_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_SLI_AXIS_V_dest_V);
sMRI_AXIS_V_data_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_data_V);
sMRI_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_keep_V);
sMRI_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_strb_V);
sMRI_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_user_V);
sMRI_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_last_V);
sMRI_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_id_V);
sMRI_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_MRI_AXIS_V_dest_V);
sSTW_AXIS_V_data_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_data_V);
sSTW_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_keep_V);
sSTW_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_strb_V);
sSTW_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_user_V);
sSTW_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_last_V);
sSTW_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_id_V);
sSTW_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_STW_AXIS_V_dest_V);
sMBW_AXIS_V_data_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_data_V);
sMBW_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_keep_V);
sMBW_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_strb_V);
sMBW_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_user_V);
sMBW_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_last_V);
sMBW_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_id_V);
sMBW_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBW_AXIS_V_dest_V);
sSTA_AXIS_V_data_V->transfer((hls::stream<short>*)__xlx_apatb_param_STA_AXIS_V_data_V);
sSTA_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_keep_V);
sSTA_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_strb_V);
sSTA_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_user_V);
sSTA_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_last_V);
sSTA_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_id_V);
sSTA_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_STA_AXIS_V_dest_V);
sMBA_AXIS_V_data_V->transfer((hls::stream<short>*)__xlx_apatb_param_MBA_AXIS_V_data_V);
sMBA_AXIS_V_keep_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_keep_V);
sMBA_AXIS_V_strb_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_strb_V);
sMBA_AXIS_V_user_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_user_V);
sMBA_AXIS_V_last_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_last_V);
sMBA_AXIS_V_id_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_id_V);
sMBA_AXIS_V_dest_V->transfer((hls::stream<char>*)__xlx_apatb_param_MBA_AXIS_V_dest_V);
}
