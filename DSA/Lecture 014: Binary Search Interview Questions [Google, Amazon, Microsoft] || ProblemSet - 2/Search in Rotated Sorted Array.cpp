#include <bits/stdc++.h> 
int findpivot(vector <int> & arr, int n){
    int s= 0; 
    int e= n-1;
    int mid= e+(s-e)/2;
    
    while(s<e){
        if(arr[mid]>= arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int bsearch(vector <int> & arr, int s, int e, int n){
    int mid= e+(s-e)/2;
    
   while(s<=e){
    if(arr[mid]==k)
        return mid;
    else if(arr[mid]>k)
        e=mid-1;
    else
        s=mid+1;
    mid= e+(s-e)/2;
   }
return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    
    int p= findpivot(arr, n);

if(arr[p]<=k && k<=arr[n-1])
{
    return bsearch(arr, p, n-1, n);
}
else
{
    return bsearch(arr, 0, p-1, n);
}

}
