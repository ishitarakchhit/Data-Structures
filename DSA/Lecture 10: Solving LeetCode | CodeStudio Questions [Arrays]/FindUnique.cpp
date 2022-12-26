#include<iostream>
using namespace std;


int findunique(int arr[], int size){
    int i=0, ans=0;
    for(i; i<size; i++)
     ans=ans^arr[i];
     
    return ans;

}


int main(){

    int arr[10]={1,2,1,2,3,4,3,4,10};
    
    cout<<findunique(arr, 9)<<endl;
    return 0;
}
