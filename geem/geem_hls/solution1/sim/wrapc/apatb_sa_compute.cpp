// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct {
        int li;
        int tw;
        int ri;
        int bw;
        int ba;
       } PE;

          typedef struct {
              _Bool ready;
              int value;
             } Buffer;

                typedef struct {
                    PE pe[2][2];
                    Buffer buffer_a_li[2];
                    Buffer buffer_b_tw[2];
                    int ba_sa[2][2];
                   } SA;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "sa_pe_li"
#define AUTOTB_TVIN_sa_pe_li  "../tv/cdatafile/c.sa_compute.autotvin_sa_pe_li.dat"
#define AUTOTB_TVOUT_sa_pe_li  "../tv/cdatafile/c.sa_compute.autotvout_sa_pe_li.dat"
// wrapc file define: "sa_pe_tw"
#define AUTOTB_TVIN_sa_pe_tw  "../tv/cdatafile/c.sa_compute.autotvin_sa_pe_tw.dat"
#define AUTOTB_TVOUT_sa_pe_tw  "../tv/cdatafile/c.sa_compute.autotvout_sa_pe_tw.dat"
// wrapc file define: "sa_pe_ri"
#define AUTOTB_TVIN_sa_pe_ri  "../tv/cdatafile/c.sa_compute.autotvin_sa_pe_ri.dat"
#define AUTOTB_TVOUT_sa_pe_ri  "../tv/cdatafile/c.sa_compute.autotvout_sa_pe_ri.dat"
// wrapc file define: "sa_pe_bw"
#define AUTOTB_TVIN_sa_pe_bw  "../tv/cdatafile/c.sa_compute.autotvin_sa_pe_bw.dat"
#define AUTOTB_TVOUT_sa_pe_bw  "../tv/cdatafile/c.sa_compute.autotvout_sa_pe_bw.dat"
// wrapc file define: "sa_pe_ba"
#define AUTOTB_TVIN_sa_pe_ba  "../tv/cdatafile/c.sa_compute.autotvin_sa_pe_ba.dat"
#define AUTOTB_TVOUT_sa_pe_ba  "../tv/cdatafile/c.sa_compute.autotvout_sa_pe_ba.dat"
// wrapc file define: "sa_buffer_a_li_ready"
#define AUTOTB_TVIN_sa_buffer_a_li_ready  "../tv/cdatafile/c.sa_compute.autotvin_sa_buffer_a_li_ready.dat"
#define AUTOTB_TVOUT_sa_buffer_a_li_ready  "../tv/cdatafile/c.sa_compute.autotvout_sa_buffer_a_li_ready.dat"
// wrapc file define: "sa_buffer_a_li_value"
#define AUTOTB_TVIN_sa_buffer_a_li_value  "../tv/cdatafile/c.sa_compute.autotvin_sa_buffer_a_li_value.dat"
// wrapc file define: "sa_buffer_b_tw_ready"
#define AUTOTB_TVIN_sa_buffer_b_tw_ready  "../tv/cdatafile/c.sa_compute.autotvin_sa_buffer_b_tw_ready.dat"
#define AUTOTB_TVOUT_sa_buffer_b_tw_ready  "../tv/cdatafile/c.sa_compute.autotvout_sa_buffer_b_tw_ready.dat"
// wrapc file define: "sa_buffer_b_tw_value"
#define AUTOTB_TVIN_sa_buffer_b_tw_value  "../tv/cdatafile/c.sa_compute.autotvin_sa_buffer_b_tw_value.dat"
// wrapc file define: "sa_ba_sa"
#define AUTOTB_TVOUT_sa_ba_sa  "../tv/cdatafile/c.sa_compute.autotvout_sa_ba_sa.dat"
#define AUTOTB_TVIN_sa_ba_sa  "../tv/cdatafile/c.sa_compute.autotvin_sa_ba_sa.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "sa_pe_li"
#define AUTOTB_TVOUT_PC_sa_pe_li  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_pe_li.dat"
// tvout file define: "sa_pe_tw"
#define AUTOTB_TVOUT_PC_sa_pe_tw  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_pe_tw.dat"
// tvout file define: "sa_pe_ri"
#define AUTOTB_TVOUT_PC_sa_pe_ri  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_pe_ri.dat"
// tvout file define: "sa_pe_bw"
#define AUTOTB_TVOUT_PC_sa_pe_bw  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_pe_bw.dat"
// tvout file define: "sa_pe_ba"
#define AUTOTB_TVOUT_PC_sa_pe_ba  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_pe_ba.dat"
// tvout file define: "sa_buffer_a_li_ready"
#define AUTOTB_TVOUT_PC_sa_buffer_a_li_ready  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_buffer_a_li_ready.dat"
// tvout file define: "sa_buffer_b_tw_ready"
#define AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_buffer_b_tw_ready.dat"
// tvout file define: "sa_ba_sa"
#define AUTOTB_TVOUT_PC_sa_ba_sa  "../tv/rtldatafile/rtl.sa_compute.autotvout_sa_ba_sa.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			sa_pe_li_depth = 0;
			sa_pe_tw_depth = 0;
			sa_pe_ri_depth = 0;
			sa_pe_bw_depth = 0;
			sa_pe_ba_depth = 0;
			sa_buffer_a_li_ready_depth = 0;
			sa_buffer_a_li_value_depth = 0;
			sa_buffer_b_tw_ready_depth = 0;
			sa_buffer_b_tw_value_depth = 0;
			sa_ba_sa_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{sa_pe_li " << sa_pe_li_depth << "}\n";
			total_list << "{sa_pe_tw " << sa_pe_tw_depth << "}\n";
			total_list << "{sa_pe_ri " << sa_pe_ri_depth << "}\n";
			total_list << "{sa_pe_bw " << sa_pe_bw_depth << "}\n";
			total_list << "{sa_pe_ba " << sa_pe_ba_depth << "}\n";
			total_list << "{sa_buffer_a_li_ready " << sa_buffer_a_li_ready_depth << "}\n";
			total_list << "{sa_buffer_a_li_value " << sa_buffer_a_li_value_depth << "}\n";
			total_list << "{sa_buffer_b_tw_ready " << sa_buffer_b_tw_ready_depth << "}\n";
			total_list << "{sa_buffer_b_tw_value " << sa_buffer_b_tw_value_depth << "}\n";
			total_list << "{sa_ba_sa " << sa_ba_sa_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int sa_pe_li_depth;
		int sa_pe_tw_depth;
		int sa_pe_ri_depth;
		int sa_pe_bw_depth;
		int sa_pe_ba_depth;
		int sa_buffer_a_li_ready_depth;
		int sa_buffer_a_li_value_depth;
		int sa_buffer_b_tw_ready_depth;
		int sa_buffer_b_tw_value_depth;
		int sa_ba_sa_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void sa_compute (
SA* sa);

extern "C" void AESL_WRAP_sa_compute (
SA* sa)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "sa_pe_li"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_li, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_li, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_li, AESL_token); // data

			sc_bv<32> *sa_pe_li_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_li', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_li', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_pe_li_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_li, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_pe_li))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_pe_li
				{
					// bitslice(31, 0)
					// {
						// celement: sa.pe.li(31, 0)
						// {
							sc_lv<32>* sa_pe_li_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.li(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->pe[0][0].li) != NULL) // check the null address if the c port is array or others
									{
										sa_pe_li_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_pe_li_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.li(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->pe[i_0][i_1].li
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->pe[0][0].li
									// output_left_conversion : sa->pe[i_0][i_1].li
									// output_type_conversion : (sa_pe_li_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->pe[0][0].li) != NULL) // check the null address if the c port is array or others
									{
										sa->pe[i_0][i_1].li = (sa_pe_li_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_pe_li_pc_buffer;
		}

		// output port post check: "sa_pe_tw"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_tw, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_tw, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_tw, AESL_token); // data

			sc_bv<32> *sa_pe_tw_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_tw', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_tw', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_pe_tw_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_tw, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_pe_tw))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_pe_tw
				{
					// bitslice(31, 0)
					// {
						// celement: sa.pe.tw(31, 0)
						// {
							sc_lv<32>* sa_pe_tw_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.tw(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->pe[0][0].tw) != NULL) // check the null address if the c port is array or others
									{
										sa_pe_tw_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_pe_tw_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.tw(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->pe[i_0][i_1].tw
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->pe[0][0].tw
									// output_left_conversion : sa->pe[i_0][i_1].tw
									// output_type_conversion : (sa_pe_tw_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->pe[0][0].tw) != NULL) // check the null address if the c port is array or others
									{
										sa->pe[i_0][i_1].tw = (sa_pe_tw_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_pe_tw_pc_buffer;
		}

		// output port post check: "sa_pe_ri"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ri, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ri, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ri, AESL_token); // data

			sc_bv<32> *sa_pe_ri_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_ri', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_ri', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_pe_ri_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ri, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_pe_ri))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_pe_ri
				{
					// bitslice(31, 0)
					// {
						// celement: sa.pe.ri(31, 0)
						// {
							sc_lv<32>* sa_pe_ri_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.ri(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->pe[0][0].ri) != NULL) // check the null address if the c port is array or others
									{
										sa_pe_ri_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_pe_ri_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.ri(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->pe[i_0][i_1].ri
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->pe[0][0].ri
									// output_left_conversion : sa->pe[i_0][i_1].ri
									// output_type_conversion : (sa_pe_ri_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->pe[0][0].ri) != NULL) // check the null address if the c port is array or others
									{
										sa->pe[i_0][i_1].ri = (sa_pe_ri_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_pe_ri_pc_buffer;
		}

		// output port post check: "sa_pe_bw"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_bw, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_bw, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_bw, AESL_token); // data

			sc_bv<32> *sa_pe_bw_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_bw', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_bw', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_pe_bw_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_bw, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_pe_bw))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_pe_bw
				{
					// bitslice(31, 0)
					// {
						// celement: sa.pe.bw(31, 0)
						// {
							sc_lv<32>* sa_pe_bw_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.bw(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->pe[0][0].bw) != NULL) // check the null address if the c port is array or others
									{
										sa_pe_bw_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_pe_bw_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.bw(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->pe[i_0][i_1].bw
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->pe[0][0].bw
									// output_left_conversion : sa->pe[i_0][i_1].bw
									// output_type_conversion : (sa_pe_bw_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->pe[0][0].bw) != NULL) // check the null address if the c port is array or others
									{
										sa->pe[i_0][i_1].bw = (sa_pe_bw_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_pe_bw_pc_buffer;
		}

		// output port post check: "sa_pe_ba"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ba, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ba, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ba, AESL_token); // data

			sc_bv<32> *sa_pe_ba_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_ba', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_pe_ba', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_pe_ba_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_pe_ba, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_pe_ba))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_pe_ba
				{
					// bitslice(31, 0)
					// {
						// celement: sa.pe.ba(31, 0)
						// {
							sc_lv<32>* sa_pe_ba_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.ba(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->pe[0][0].ba) != NULL) // check the null address if the c port is array or others
									{
										sa_pe_ba_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_pe_ba_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.pe.ba(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->pe[i_0][i_1].ba
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->pe[0][0].ba
									// output_left_conversion : sa->pe[i_0][i_1].ba
									// output_type_conversion : (sa_pe_ba_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->pe[0][0].ba) != NULL) // check the null address if the c port is array or others
									{
										sa->pe[i_0][i_1].ba = (sa_pe_ba_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_pe_ba_pc_buffer;
		}

		// output port post check: "sa_buffer_a_li_ready"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_a_li_ready, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_a_li_ready, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_a_li_ready, AESL_token); // data

			sc_bv<1> *sa_buffer_a_li_ready_pc_buffer = new sc_bv<1>[2];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_buffer_a_li_ready', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_buffer_a_li_ready', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_buffer_a_li_ready_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_a_li_ready, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_buffer_a_li_ready))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_buffer_a_li_ready
				{
					// bitslice(0, 0)
					// {
						// celement: sa.buffer_a_li.ready(0, 0)
						// {
							sc_lv<1>* sa_buffer_a_li_ready_lv0_0_1_1 = new sc_lv<1>[2];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: sa.buffer_a_li.ready(0, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								if (&(sa->buffer_a_li[0].ready) != NULL) // check the null address if the c port is array or others
								{
									sa_buffer_a_li_ready_lv0_0_1_1[hls_map_index].range(0, 0) = sc_bv<1>(sa_buffer_a_li_ready_pc_buffer[hls_map_index].range(0, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: sa.buffer_a_li.ready(0, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : sa->buffer_a_li[i_0].ready
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : sa->buffer_a_li[0].ready
								// output_left_conversion : sa->buffer_a_li[i_0].ready
								// output_type_conversion : (sa_buffer_a_li_ready_lv0_0_1_1[hls_map_index]).to_uint64()
								if (&(sa->buffer_a_li[0].ready) != NULL) // check the null address if the c port is array or others
								{
									sa->buffer_a_li[i_0].ready = (sa_buffer_a_li_ready_lv0_0_1_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_buffer_a_li_ready_pc_buffer;
		}

		// output port post check: "sa_buffer_b_tw_ready"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready, AESL_token); // data

			sc_bv<1> *sa_buffer_b_tw_ready_pc_buffer = new sc_bv<1>[2];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_buffer_b_tw_ready', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_buffer_b_tw_ready', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_buffer_b_tw_ready_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_buffer_b_tw_ready))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_buffer_b_tw_ready
				{
					// bitslice(0, 0)
					// {
						// celement: sa.buffer_b_tw.ready(0, 0)
						// {
							sc_lv<1>* sa_buffer_b_tw_ready_lv0_0_1_1 = new sc_lv<1>[2];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: sa.buffer_b_tw.ready(0, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								if (&(sa->buffer_b_tw[0].ready) != NULL) // check the null address if the c port is array or others
								{
									sa_buffer_b_tw_ready_lv0_0_1_1[hls_map_index].range(0, 0) = sc_bv<1>(sa_buffer_b_tw_ready_pc_buffer[hls_map_index].range(0, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: sa.buffer_b_tw.ready(0, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : sa->buffer_b_tw[i_0].ready
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : sa->buffer_b_tw[0].ready
								// output_left_conversion : sa->buffer_b_tw[i_0].ready
								// output_type_conversion : (sa_buffer_b_tw_ready_lv0_0_1_1[hls_map_index]).to_uint64()
								if (&(sa->buffer_b_tw[0].ready) != NULL) // check the null address if the c port is array or others
								{
									sa->buffer_b_tw[i_0].ready = (sa_buffer_b_tw_ready_lv0_0_1_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_buffer_b_tw_ready_pc_buffer;
		}

		// output port post check: "sa_ba_sa"
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_ba_sa, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sa_ba_sa, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sa_ba_sa, AESL_token); // data

			sc_bv<32> *sa_ba_sa_pc_buffer = new sc_bv<32>[4];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_ba_sa', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sa_ba_sa', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sa_ba_sa_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sa_ba_sa, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sa_ba_sa))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sa_ba_sa
				{
					// bitslice(31, 0)
					// {
						// celement: sa.ba_sa(31, 0)
						// {
							sc_lv<32>* sa_ba_sa_lv0_0_1_1_lv1_0_1_1 = new sc_lv<32>[4];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.ba_sa(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									if (&(sa->ba_sa[0][0]) != NULL) // check the null address if the c port is array or others
									{
										sa_ba_sa_lv0_0_1_1_lv1_0_1_1[hls_map_index].range(31, 0) = sc_bv<32>(sa_ba_sa_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: sa.ba_sa(31, 0)
						{
							// carray: (0) => (1) @ (1)
							for (int i_0 = 0; i_0 <= 1; i_0 += 1)
							{
								// carray: (0) => (1) @ (1)
								for (int i_1 = 0; i_1 <= 1; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : sa->ba_sa[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : sa->ba_sa[0][0]
									// output_left_conversion : sa->ba_sa[i_0][i_1]
									// output_type_conversion : (sa_ba_sa_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64()
									if (&(sa->ba_sa[0][0]) != NULL) // check the null address if the c port is array or others
									{
										sa->ba_sa[i_0][i_1] = (sa_ba_sa_lv0_0_1_1_lv1_0_1_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sa_ba_sa_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "sa_pe_li"
		char* tvin_sa_pe_li = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_pe_li);
		char* tvout_sa_pe_li = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_pe_li);

		// "sa_pe_tw"
		char* tvin_sa_pe_tw = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_pe_tw);
		char* tvout_sa_pe_tw = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_pe_tw);

		// "sa_pe_ri"
		char* tvin_sa_pe_ri = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_pe_ri);
		char* tvout_sa_pe_ri = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_pe_ri);

		// "sa_pe_bw"
		char* tvin_sa_pe_bw = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_pe_bw);
		char* tvout_sa_pe_bw = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_pe_bw);

		// "sa_pe_ba"
		char* tvin_sa_pe_ba = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_pe_ba);
		char* tvout_sa_pe_ba = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_pe_ba);

		// "sa_buffer_a_li_ready"
		char* tvin_sa_buffer_a_li_ready = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_buffer_a_li_ready);
		char* tvout_sa_buffer_a_li_ready = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_buffer_a_li_ready);

		// "sa_buffer_a_li_value"
		char* tvin_sa_buffer_a_li_value = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_buffer_a_li_value);

		// "sa_buffer_b_tw_ready"
		char* tvin_sa_buffer_b_tw_ready = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_buffer_b_tw_ready);
		char* tvout_sa_buffer_b_tw_ready = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_buffer_b_tw_ready);

		// "sa_buffer_b_tw_value"
		char* tvin_sa_buffer_b_tw_value = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_buffer_b_tw_value);

		// "sa_ba_sa"
		char* tvin_sa_ba_sa = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sa_ba_sa);
		char* tvout_sa_ba_sa = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sa_ba_sa);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_sa_pe_li, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_pe_li, tvin_sa_pe_li);

		sc_bv<32>* sa_pe_li_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_li
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.li(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].li
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].li
							// regulate_c_name       : sa_pe_li
							// input_type_conversion : sa->pe[i_0][i_1].li
							if (&(sa->pe[0][0].li) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_li_tmp_mem;
								sa_pe_li_tmp_mem = sa->pe[i_0][i_1].li;
								sa_pe_li_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_li_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_pe_li, "%s\n", (sa_pe_li_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_pe_li, tvin_sa_pe_li);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_li_depth);
		sprintf(tvin_sa_pe_li, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_pe_li, tvin_sa_pe_li);

		// release memory allocation
		delete [] sa_pe_li_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_pe_tw, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_pe_tw, tvin_sa_pe_tw);

		sc_bv<32>* sa_pe_tw_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_tw
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.tw(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].tw
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].tw
							// regulate_c_name       : sa_pe_tw
							// input_type_conversion : sa->pe[i_0][i_1].tw
							if (&(sa->pe[0][0].tw) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_tw_tmp_mem;
								sa_pe_tw_tmp_mem = sa->pe[i_0][i_1].tw;
								sa_pe_tw_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_tw_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_pe_tw, "%s\n", (sa_pe_tw_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_pe_tw, tvin_sa_pe_tw);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_tw_depth);
		sprintf(tvin_sa_pe_tw, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_pe_tw, tvin_sa_pe_tw);

		// release memory allocation
		delete [] sa_pe_tw_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_pe_ri, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_pe_ri, tvin_sa_pe_ri);

		sc_bv<32>* sa_pe_ri_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_ri
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.ri(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].ri
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].ri
							// regulate_c_name       : sa_pe_ri
							// input_type_conversion : sa->pe[i_0][i_1].ri
							if (&(sa->pe[0][0].ri) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_ri_tmp_mem;
								sa_pe_ri_tmp_mem = sa->pe[i_0][i_1].ri;
								sa_pe_ri_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_ri_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_pe_ri, "%s\n", (sa_pe_ri_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_pe_ri, tvin_sa_pe_ri);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_ri_depth);
		sprintf(tvin_sa_pe_ri, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_pe_ri, tvin_sa_pe_ri);

		// release memory allocation
		delete [] sa_pe_ri_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_pe_bw, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_pe_bw, tvin_sa_pe_bw);

		sc_bv<32>* sa_pe_bw_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_bw
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.bw(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].bw
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].bw
							// regulate_c_name       : sa_pe_bw
							// input_type_conversion : sa->pe[i_0][i_1].bw
							if (&(sa->pe[0][0].bw) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_bw_tmp_mem;
								sa_pe_bw_tmp_mem = sa->pe[i_0][i_1].bw;
								sa_pe_bw_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_bw_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_pe_bw, "%s\n", (sa_pe_bw_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_pe_bw, tvin_sa_pe_bw);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_bw_depth);
		sprintf(tvin_sa_pe_bw, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_pe_bw, tvin_sa_pe_bw);

		// release memory allocation
		delete [] sa_pe_bw_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_pe_ba, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_pe_ba, tvin_sa_pe_ba);

		sc_bv<32>* sa_pe_ba_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_ba
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.ba(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].ba
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].ba
							// regulate_c_name       : sa_pe_ba
							// input_type_conversion : sa->pe[i_0][i_1].ba
							if (&(sa->pe[0][0].ba) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_ba_tmp_mem;
								sa_pe_ba_tmp_mem = sa->pe[i_0][i_1].ba;
								sa_pe_ba_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_ba_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_pe_ba, "%s\n", (sa_pe_ba_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_pe_ba, tvin_sa_pe_ba);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_ba_depth);
		sprintf(tvin_sa_pe_ba, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_pe_ba, tvin_sa_pe_ba);

		// release memory allocation
		delete [] sa_pe_ba_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_buffer_a_li_ready, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_ready, tvin_sa_buffer_a_li_ready);

		sc_bv<1>* sa_buffer_a_li_ready_tvin_wrapc_buffer = new sc_bv<1>[2];

		// RTL Name: sa_buffer_a_li_ready
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_a_li.ready(0, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_a_li[i_0].ready
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_a_li[0].ready
						// regulate_c_name       : sa_buffer_a_li_ready
						// input_type_conversion : sa->buffer_a_li[i_0].ready
						if (&(sa->buffer_a_li[0].ready) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> sa_buffer_a_li_ready_tmp_mem;
							sa_buffer_a_li_ready_tmp_mem = sa->buffer_a_li[i_0].ready;
							sa_buffer_a_li_ready_tvin_wrapc_buffer[hls_map_index].range(0, 0) = sa_buffer_a_li_ready_tmp_mem.range(0, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_sa_buffer_a_li_ready, "%s\n", (sa_buffer_a_li_ready_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_ready, tvin_sa_buffer_a_li_ready);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_a_li_ready_depth);
		sprintf(tvin_sa_buffer_a_li_ready, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_ready, tvin_sa_buffer_a_li_ready);

		// release memory allocation
		delete [] sa_buffer_a_li_ready_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_buffer_a_li_value, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_value, tvin_sa_buffer_a_li_value);

		sc_bv<32>* sa_buffer_a_li_value_tvin_wrapc_buffer = new sc_bv<32>[2];

		// RTL Name: sa_buffer_a_li_value
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_a_li.value(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_a_li[i_0].value
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_a_li[0].value
						// regulate_c_name       : sa_buffer_a_li_value
						// input_type_conversion : sa->buffer_a_li[i_0].value
						if (&(sa->buffer_a_li[0].value) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> sa_buffer_a_li_value_tmp_mem;
							sa_buffer_a_li_value_tmp_mem = sa->buffer_a_li[i_0].value;
							sa_buffer_a_li_value_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_buffer_a_li_value_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_sa_buffer_a_li_value, "%s\n", (sa_buffer_a_li_value_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_value, tvin_sa_buffer_a_li_value);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_a_li_value_depth);
		sprintf(tvin_sa_buffer_a_li_value, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_a_li_value, tvin_sa_buffer_a_li_value);

		// release memory allocation
		delete [] sa_buffer_a_li_value_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_buffer_b_tw_ready, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_ready, tvin_sa_buffer_b_tw_ready);

		sc_bv<1>* sa_buffer_b_tw_ready_tvin_wrapc_buffer = new sc_bv<1>[2];

		// RTL Name: sa_buffer_b_tw_ready
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_b_tw.ready(0, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_b_tw[i_0].ready
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_b_tw[0].ready
						// regulate_c_name       : sa_buffer_b_tw_ready
						// input_type_conversion : sa->buffer_b_tw[i_0].ready
						if (&(sa->buffer_b_tw[0].ready) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> sa_buffer_b_tw_ready_tmp_mem;
							sa_buffer_b_tw_ready_tmp_mem = sa->buffer_b_tw[i_0].ready;
							sa_buffer_b_tw_ready_tvin_wrapc_buffer[hls_map_index].range(0, 0) = sa_buffer_b_tw_ready_tmp_mem.range(0, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_sa_buffer_b_tw_ready, "%s\n", (sa_buffer_b_tw_ready_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_ready, tvin_sa_buffer_b_tw_ready);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_b_tw_ready_depth);
		sprintf(tvin_sa_buffer_b_tw_ready, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_ready, tvin_sa_buffer_b_tw_ready);

		// release memory allocation
		delete [] sa_buffer_b_tw_ready_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_buffer_b_tw_value, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_value, tvin_sa_buffer_b_tw_value);

		sc_bv<32>* sa_buffer_b_tw_value_tvin_wrapc_buffer = new sc_bv<32>[2];

		// RTL Name: sa_buffer_b_tw_value
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_b_tw.value(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_b_tw[i_0].value
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_b_tw[0].value
						// regulate_c_name       : sa_buffer_b_tw_value
						// input_type_conversion : sa->buffer_b_tw[i_0].value
						if (&(sa->buffer_b_tw[0].value) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> sa_buffer_b_tw_value_tmp_mem;
							sa_buffer_b_tw_value_tmp_mem = sa->buffer_b_tw[i_0].value;
							sa_buffer_b_tw_value_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_buffer_b_tw_value_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_sa_buffer_b_tw_value, "%s\n", (sa_buffer_b_tw_value_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_value, tvin_sa_buffer_b_tw_value);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_b_tw_value_depth);
		sprintf(tvin_sa_buffer_b_tw_value, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_buffer_b_tw_value, tvin_sa_buffer_b_tw_value);

		// release memory allocation
		delete [] sa_buffer_b_tw_value_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sa_ba_sa, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sa_ba_sa, tvin_sa_ba_sa);

		sc_bv<32>* sa_ba_sa_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_ba_sa
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.ba_sa(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->ba_sa[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->ba_sa[0][0]
							// regulate_c_name       : sa_ba_sa
							// input_type_conversion : sa->ba_sa[i_0][i_1]
							if (&(sa->ba_sa[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_ba_sa_tmp_mem;
								sa_ba_sa_tmp_mem = sa->ba_sa[i_0][i_1];
								sa_ba_sa_tvin_wrapc_buffer[hls_map_index].range(31, 0) = sa_ba_sa_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_sa_ba_sa, "%s\n", (sa_ba_sa_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sa_ba_sa, tvin_sa_ba_sa);
		}

		tcl_file.set_num(4, &tcl_file.sa_ba_sa_depth);
		sprintf(tvin_sa_ba_sa, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sa_ba_sa, tvin_sa_ba_sa);

		// release memory allocation
		delete [] sa_ba_sa_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		sa_compute(sa);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_sa_pe_li, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_li, tvout_sa_pe_li);

		sc_bv<32>* sa_pe_li_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_li
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.li(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].li
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].li
							// regulate_c_name       : sa_pe_li
							// input_type_conversion : sa->pe[i_0][i_1].li
							if (&(sa->pe[0][0].li) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_li_tmp_mem;
								sa_pe_li_tmp_mem = sa->pe[i_0][i_1].li;
								sa_pe_li_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_li_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_pe_li, "%s\n", (sa_pe_li_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_pe_li, tvout_sa_pe_li);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_li_depth);
		sprintf(tvout_sa_pe_li, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_li, tvout_sa_pe_li);

		// release memory allocation
		delete [] sa_pe_li_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_pe_tw, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_tw, tvout_sa_pe_tw);

		sc_bv<32>* sa_pe_tw_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_tw
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.tw(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].tw
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].tw
							// regulate_c_name       : sa_pe_tw
							// input_type_conversion : sa->pe[i_0][i_1].tw
							if (&(sa->pe[0][0].tw) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_tw_tmp_mem;
								sa_pe_tw_tmp_mem = sa->pe[i_0][i_1].tw;
								sa_pe_tw_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_tw_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_pe_tw, "%s\n", (sa_pe_tw_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_pe_tw, tvout_sa_pe_tw);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_tw_depth);
		sprintf(tvout_sa_pe_tw, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_tw, tvout_sa_pe_tw);

		// release memory allocation
		delete [] sa_pe_tw_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_pe_ri, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_ri, tvout_sa_pe_ri);

		sc_bv<32>* sa_pe_ri_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_ri
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.ri(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].ri
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].ri
							// regulate_c_name       : sa_pe_ri
							// input_type_conversion : sa->pe[i_0][i_1].ri
							if (&(sa->pe[0][0].ri) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_ri_tmp_mem;
								sa_pe_ri_tmp_mem = sa->pe[i_0][i_1].ri;
								sa_pe_ri_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_ri_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_pe_ri, "%s\n", (sa_pe_ri_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_pe_ri, tvout_sa_pe_ri);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_ri_depth);
		sprintf(tvout_sa_pe_ri, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_ri, tvout_sa_pe_ri);

		// release memory allocation
		delete [] sa_pe_ri_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_pe_bw, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_bw, tvout_sa_pe_bw);

		sc_bv<32>* sa_pe_bw_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_bw
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.bw(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].bw
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].bw
							// regulate_c_name       : sa_pe_bw
							// input_type_conversion : sa->pe[i_0][i_1].bw
							if (&(sa->pe[0][0].bw) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_bw_tmp_mem;
								sa_pe_bw_tmp_mem = sa->pe[i_0][i_1].bw;
								sa_pe_bw_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_bw_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_pe_bw, "%s\n", (sa_pe_bw_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_pe_bw, tvout_sa_pe_bw);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_bw_depth);
		sprintf(tvout_sa_pe_bw, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_bw, tvout_sa_pe_bw);

		// release memory allocation
		delete [] sa_pe_bw_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_pe_ba, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_ba, tvout_sa_pe_ba);

		sc_bv<32>* sa_pe_ba_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_pe_ba
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.pe.ba(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->pe[i_0][i_1].ba
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->pe[0][0].ba
							// regulate_c_name       : sa_pe_ba
							// input_type_conversion : sa->pe[i_0][i_1].ba
							if (&(sa->pe[0][0].ba) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_pe_ba_tmp_mem;
								sa_pe_ba_tmp_mem = sa->pe[i_0][i_1].ba;
								sa_pe_ba_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_pe_ba_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_pe_ba, "%s\n", (sa_pe_ba_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_pe_ba, tvout_sa_pe_ba);
		}

		tcl_file.set_num(4, &tcl_file.sa_pe_ba_depth);
		sprintf(tvout_sa_pe_ba, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_pe_ba, tvout_sa_pe_ba);

		// release memory allocation
		delete [] sa_pe_ba_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_buffer_a_li_ready, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_buffer_a_li_ready, tvout_sa_buffer_a_li_ready);

		sc_bv<1>* sa_buffer_a_li_ready_tvout_wrapc_buffer = new sc_bv<1>[2];

		// RTL Name: sa_buffer_a_li_ready
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_a_li.ready(0, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_a_li[i_0].ready
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_a_li[0].ready
						// regulate_c_name       : sa_buffer_a_li_ready
						// input_type_conversion : sa->buffer_a_li[i_0].ready
						if (&(sa->buffer_a_li[0].ready) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> sa_buffer_a_li_ready_tmp_mem;
							sa_buffer_a_li_ready_tmp_mem = sa->buffer_a_li[i_0].ready;
							sa_buffer_a_li_ready_tvout_wrapc_buffer[hls_map_index].range(0, 0) = sa_buffer_a_li_ready_tmp_mem.range(0, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvout_sa_buffer_a_li_ready, "%s\n", (sa_buffer_a_li_ready_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_buffer_a_li_ready, tvout_sa_buffer_a_li_ready);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_a_li_ready_depth);
		sprintf(tvout_sa_buffer_a_li_ready, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_buffer_a_li_ready, tvout_sa_buffer_a_li_ready);

		// release memory allocation
		delete [] sa_buffer_a_li_ready_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_buffer_b_tw_ready, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_buffer_b_tw_ready, tvout_sa_buffer_b_tw_ready);

		sc_bv<1>* sa_buffer_b_tw_ready_tvout_wrapc_buffer = new sc_bv<1>[2];

		// RTL Name: sa_buffer_b_tw_ready
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: sa.buffer_b_tw.ready(0, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sa->buffer_b_tw[i_0].ready
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sa->buffer_b_tw[0].ready
						// regulate_c_name       : sa_buffer_b_tw_ready
						// input_type_conversion : sa->buffer_b_tw[i_0].ready
						if (&(sa->buffer_b_tw[0].ready) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> sa_buffer_b_tw_ready_tmp_mem;
							sa_buffer_b_tw_ready_tmp_mem = sa->buffer_b_tw[i_0].ready;
							sa_buffer_b_tw_ready_tvout_wrapc_buffer[hls_map_index].range(0, 0) = sa_buffer_b_tw_ready_tmp_mem.range(0, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvout_sa_buffer_b_tw_ready, "%s\n", (sa_buffer_b_tw_ready_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_buffer_b_tw_ready, tvout_sa_buffer_b_tw_ready);
		}

		tcl_file.set_num(2, &tcl_file.sa_buffer_b_tw_ready_depth);
		sprintf(tvout_sa_buffer_b_tw_ready, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_buffer_b_tw_ready, tvout_sa_buffer_b_tw_ready);

		// release memory allocation
		delete [] sa_buffer_b_tw_ready_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sa_ba_sa, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sa_ba_sa, tvout_sa_ba_sa);

		sc_bv<32>* sa_ba_sa_tvout_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: sa_ba_sa
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: sa.ba_sa(31, 0)
				{
					// carray: (0) => (1) @ (1)
					for (int i_0 = 0; i_0 <= 1; i_0 += 1)
					{
						// carray: (0) => (1) @ (1)
						for (int i_1 = 0; i_1 <= 1; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : sa->ba_sa[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : sa->ba_sa[0][0]
							// regulate_c_name       : sa_ba_sa
							// input_type_conversion : sa->ba_sa[i_0][i_1]
							if (&(sa->ba_sa[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> sa_ba_sa_tmp_mem;
								sa_ba_sa_tmp_mem = sa->ba_sa[i_0][i_1];
								sa_ba_sa_tvout_wrapc_buffer[hls_map_index].range(31, 0) = sa_ba_sa_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvout_sa_ba_sa, "%s\n", (sa_ba_sa_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sa_ba_sa, tvout_sa_ba_sa);
		}

		tcl_file.set_num(4, &tcl_file.sa_ba_sa_depth);
		sprintf(tvout_sa_ba_sa, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sa_ba_sa, tvout_sa_ba_sa);

		// release memory allocation
		delete [] sa_ba_sa_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "sa_pe_li"
		delete [] tvin_sa_pe_li;
		delete [] tvout_sa_pe_li;
		// release memory allocation: "sa_pe_tw"
		delete [] tvin_sa_pe_tw;
		delete [] tvout_sa_pe_tw;
		// release memory allocation: "sa_pe_ri"
		delete [] tvin_sa_pe_ri;
		delete [] tvout_sa_pe_ri;
		// release memory allocation: "sa_pe_bw"
		delete [] tvin_sa_pe_bw;
		delete [] tvout_sa_pe_bw;
		// release memory allocation: "sa_pe_ba"
		delete [] tvin_sa_pe_ba;
		delete [] tvout_sa_pe_ba;
		// release memory allocation: "sa_buffer_a_li_ready"
		delete [] tvin_sa_buffer_a_li_ready;
		delete [] tvout_sa_buffer_a_li_ready;
		// release memory allocation: "sa_buffer_a_li_value"
		delete [] tvin_sa_buffer_a_li_value;
		// release memory allocation: "sa_buffer_b_tw_ready"
		delete [] tvin_sa_buffer_b_tw_ready;
		delete [] tvout_sa_buffer_b_tw_ready;
		// release memory allocation: "sa_buffer_b_tw_value"
		delete [] tvin_sa_buffer_b_tw_value;
		// release memory allocation: "sa_ba_sa"
		delete [] tvout_sa_ba_sa;
		delete [] tvin_sa_ba_sa;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

