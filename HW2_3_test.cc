#include <iostream>
using namespace std;
#include "functions.hh"

int main() {
   const int N=4;
   const int M=2;

 short a[N][M] = {{1,2},{3,4},{5,6},{7,8}};
 short row_sum[N];

 compute_row_sum<N,M>(a,row_sum );

for(short i:row_sum)
std::cout<<i<<endl;

 return 0;

}