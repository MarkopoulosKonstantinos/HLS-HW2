#include <iostream>
using namespace std;
#include "functions.hh"


int main() {

const int N=12;
int a[]={1,2,3,4,5,6,7,8,9,10,11,12};

    wave_sort<N>(a);

    for(int i:a){
        cout<<i<<" ";

    }
    


cout<<endl;
return 0;

}
