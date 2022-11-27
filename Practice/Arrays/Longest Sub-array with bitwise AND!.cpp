/*
You are given an array of integers(ARR) and Q queries.
Query Type-> S: Fidn the largest index IND such that ARR[1] & ARR[2] &....... ARR[IND] >=S
For each query, your task is to find out the largest index IND such that the bitwise and of elements in the array ARR from index 1 to IND is greater than euqal to X.
*/

//approach: binary search approach where the seach space s to e and the value of s is the bitwise & of every element present in the array and the value of e is the first element of the array.

#include <bits/stdc++.h> 

bool isPossible(vector<int> arr, int mid, int query){   //function to find whether the given range of indices gives a possible solution or not
    int result= arr[0];
    for(int i=1; i<=mid; i++){
        result = result & arr[i];
    }
    if(result >= query)
        return true;
    else 
        return false;
}


vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{
    //Write your code here.
    vector<int> temp;
    int query;
    for(int k=0; k<q; k++){
        query = queries[k];

        int s= 0;                      // defines our search space
        int e= n-1;
        int mid= s+ (e-s)/2;
        int ans=-1;
        
        while(s<=e){
            if(isPossible(arr, mid, query)){
                ans= mid;
                s= mid+1;
            }
            else 
                e= mid-1;
            
            mid= s+ (e-s)/2;               
        }
        temp.push_back(ans+1);
                
    }
    return temp;
}
