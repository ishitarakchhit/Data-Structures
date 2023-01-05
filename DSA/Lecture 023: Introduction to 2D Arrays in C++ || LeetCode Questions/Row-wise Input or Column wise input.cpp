#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

//row wise
void inputarray(int arr[3][4]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }           
    }
    
}
//column wise input
void inputarray(int arr[3][4]){
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i][j];
        }           
    }
    
}

void printarray(int arr[3][4]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }        
        cout<<endl;   
    }
    
}




int main(){
    int key;

    int arr[3][4]={{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};


    inputarray(arr);
    printarray(arr);

}
