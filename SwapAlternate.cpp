#include<iostream>
using namespace std;


void swapalternate(int arr[], int size){
    int i=1;
    while(i<size){
        swap(arr[i-1], arr[i]);
        i+=2;
    }

}


void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++)
     cout<<arr[i]<<"\t";
}

int main(){

    int arr[10]={-4,4,3,8,6,44,38,95,83};
   
    swapalternate(arr, 9);
    printArray(arr, 9);
    return 0;
}