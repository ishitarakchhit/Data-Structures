#include <bits/stdc++.h> 
bool isPossible(vector<vector<int>> &arr, int n, int B, int mid){
    
    int sum =0; 
    
    for(int i=0; i<n; i++){
        for(int j=1; j<=arr[i][0]; j++){
            if(arr[i][j] <= mid){
                sum = sum + arr[i][j];
            }
        }
    }
    if( sum<= B){
        return true;
    }
    return false;
}

int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    //Write your code here.
    int s=0; 
    int e= 0;
    int mid= s + (e-s)/2;
    int ans=-1; 
    int sum=0;
    
    for(int i=0; i<n; i++){
        for(int j=1; j<=arr[i][0]; j++){
            sum= sum+ arr[i][j];
            }
        }
    
e= sum;
    
    while(s<=e){
        if(isPossible(arr, n, B, mid)){
            ans= mid;
            s= mid+1;
        }
        else {
            e= mid-1;
        }
        
        mid= s + (e-s)/2;
    }
    return ans;
}
