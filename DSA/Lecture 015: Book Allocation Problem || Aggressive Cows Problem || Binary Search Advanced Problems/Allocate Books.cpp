[Question](https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0w0MmxvdGMwclZGNHpYR3I1dmRkdFlWUkRHQXxBQ3Jtc0trcmpTUnY3YnlfdjdWTy11RUlacHhXNS03QklDbVdyc2dGczhkV19LUS1SSTdrNUtDMXJ5WWlEOTRpTFpodENEckJzb1FVOGhNcTlJS01QUkt3RXpJRWpqbmxqSkJFY1dSb2NES1M5cS1HeWRwWEFjcw&q=https%3A%2F%2Fbit.ly%2F3GiCqY0&v=YTTdLgyqOLY)

/* Given an array of pages corressponding to a certain book, 
you have to allocate the books to m number of students such that the maximum no. of pages assigned to a student is minimum*/


#include <bits/stdc++.h> 


//boolean function to decide whether allocating certain number of books to given no. of students is possible or not
bool isPossible(vector<int> arr, int n, int m, int mid){
    int student =1;
    int pages=0;
    
    for(int i=0; i<n; i++){
        if(pages +arr[i]<= mid){
            pages = pages+arr[i];
        }
        else{
            student ++;
            if(arr[i]>mid || student >m){
                return false;
            }
           
            pages =arr[i];
        }                     
    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    
    int s=0; 
    int e=0;
    int ans=-1;
    
    //allocating e with the sum of array
    for(int i=0; i<n; i++){
        e = e + arr[i];
    }
    
    int mid= e+ (s-e)/2;
    
    //run a loop to perform binary search and decide whether the value of mid is minimum or not
    
    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            e=mid-1;
            
        }
        else
            s=mid+1;
        
        mid= e+ (s-e)/2;
    }
    
    return ans;
}
