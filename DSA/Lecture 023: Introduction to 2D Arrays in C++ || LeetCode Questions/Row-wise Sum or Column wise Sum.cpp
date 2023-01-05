#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

//keeping rowindex constant and changing col index and vice versa for column

void rowsum(int arr[3][4]){
    int sum;
    for(int i=0; i<3; i++){
        sum=0;
        for(int j=0; j<4; j++){
            sum+= arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is: "<<sum<<endl;
    }
}

void colsum(int arr[3][4]){
    int sum;
    for(int j=0; j<4; j++){
        sum=0;
        for(int i=0; i<3; i++){
            sum+= arr[i][j];
        }
        cout<<"sum of col "<<j+1<<" is: "<<sum<<endl;
    }
}


int main(){
    int key;

    int arr[3][4]={{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};


    rowsum(arr);
    colsum(arr);

}
