/////////////////////// 1 ///////////////////////

unsigned short count_ones(unsigned int a) {

unsigned int input=a;         // 32-bit
unsigned short int count=0; // 16-bit


int i;

//convesion of input from decimal to binary

int binary[32];

for(i=0;input>0;i++){

binary[i]=input%2;
input=input/2;

}


for(i=i-1;i>=0;i--){

    if (binary[i]==1) {

        count=count+1;
    }

}
return count;
}

/////////////////////// 2 ///////////////////////

unsigned int checksum(unsigned int input){
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
return checksum;

}
/////////////////////// 3 ///////////////////////

template<int N,int M>
void compute_row_sum(short a[N][M],short row_sum[M])
{

for(int row=0;row<N;row++) {

    row_sum[row]=0;

        for (int column=0;column<M;column++){
            row_sum[row]+=a[row][column];
        
    }

}

} 


/////////////////////// 4 ///////////////////////

void swap(int* x , int* y){

    int temp=*x;
    *x=*y;
    *y=temp;

}

void bubble_sort(int arr[] , int N){

    for (int i=0;i<N-1;i++){

        for(int j=0;j<N-1-i;j++){

            if (arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
            }
        }
    }
}


template<int N>

void wave_sort(int a[N]){

    bubble_sort(a,N);

    for (int i=0;i<N-1;i+=2){

        swap(&a[i],&a[i+1]);

    }


}
