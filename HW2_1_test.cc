#include <iostream>
using namespace std;
#include "functions.hh"



int main() {
int input;
    cout<<"input: "<<endl;
    cin>>input;
    int result=count_ones(input);

    cout<<"1's: "<<result<<endl;

return 0;
}
