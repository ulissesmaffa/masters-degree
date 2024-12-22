// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>

#define ARRAY_SIZE 3

using namespace std;

// Print the queue
void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}

// Driver Code
int main(){
    int i,j;

    //modelo para conexoes horizontais
    for(i=0;i<ARRAY_SIZE;i++){
        for(j=1;j<ARRAY_SIZE;j++){
            printf("pe[%i][%i].li = pe[%i][%i].ri\n",i,j,i,j-1);
        }
    }

    //modelo para conexoes horizontais
    for(i=1;i<ARRAY_SIZE;i++){
        for(j=0;j<ARRAY_SIZE;j++){
            printf("pe[%i][%i].tw = pe[%i][%i].bw\n",i,j,i-1,j);
        }
    }

/*
   queue<int> q1;
   q1.push(1);
   q1.push(2);
   q1.push(3);

   cout << "The first queue is : ";
   print_queue(q1);
  
   queue<int> q2;
   q2.push(4);
   q2.push(5);
   q2.push(6);

   cout << "The second queue is : ";
   print_queue(q2);
  
   q1.swap(q2);   
   cout << "After swapping, the first queue is : ";
   print_queue(q1);
   cout << "After swapping the second queue is : ";
   print_queue(q2);
   
   cout << "Size the second queue is : ";
   cout<<q1.size();
   q1.pop();
   printf("\n");
   cout << "Size the second queue is : ";
   cout<<q1.size();
   printf("\n");
   cout<<q1.empty();  //returns false since q1 is not empty
   printf("\n");
   cout<<q1.front();
   printf("\n");
   cout<<q2.front();
   printf("\n");
*/

    
   return 0;
}

