/* 
Given an array arr and a position m. You have to reverse the array after m
*/

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    reverse(arr.begin()+m+1, arr.end());
}

/*alternate solution*/

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    for(int i=m+1, j= arr.size()-1; i<=j; i++, j--){
        swap(arr[i], arr[j]);
    }
}

