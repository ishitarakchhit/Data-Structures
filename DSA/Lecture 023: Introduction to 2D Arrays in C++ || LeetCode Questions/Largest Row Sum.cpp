#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int largestrowsum(int arr[3][4]){
    int sum;
    int max_sum=-222;        //or INT_MIN
    int index;

    for(int i=0; i<3; i++){
        sum=0;
        for(int j=0; j<4; j++){
            sum+= arr[i][j];
        }
        if(max_sum<sum){
            max_sum=sum;
            index=i;
        }
    }
    return index;
    
}




int main(){
    int key;

    int arr[3][4]={{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};


    cout<<largestrowsum(arr);

}
