#include <iostream>
using namespace std;
#include "functions.hh"


    int main(){ 



    int input;
    cout<<"input: "<<endl;
    cin>>input;
    int result=checksum(input);

    cout<<"checksum: "<<result<<endl;

    return 0;

    unsigned int checksum=0;
    unsigned int digit;
    int i=2;

while(input>0){

    digit=input%10;  //get last digit

    if (i%2==0) checksum+=digit;
    else {

    int doubled=2*digit;
    if (doubled<10) 
        checksum+=doubled;
        else {
            while (doubled>0) {

                checksum+=doubled%10;
                doubled/=10; 

            }

        }
 
}
input/=10; //move to next LSdigit
i+=1;
}
cout<<"checksum: "<<checksum<<endl;
return 0;
} 