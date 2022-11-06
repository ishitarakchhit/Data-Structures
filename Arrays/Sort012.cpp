/*
Sort an array which has elements 0, 1 and 2 while traversing the array only once
*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int left=0, mid=0, right=n-1;
    
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else 
        {
            swap(arr[right], arr[mid]);
            right--;
        }
    }
    
   
}
