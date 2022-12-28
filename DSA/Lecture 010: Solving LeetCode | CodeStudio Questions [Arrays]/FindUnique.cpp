(https://www.codingninjas.com/codestudio/problems/find-unique_625159)
 /*
 Find the unique element in an array of size N where there are 2*M+1 elements with each element repeating twice except one. Find that element.
 */
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
