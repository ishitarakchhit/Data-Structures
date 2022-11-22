#include <bits/stdc++.h> 
long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    long long s1, s3;
    int ans=0;
    s1 = arr[0];
    s3 = arr[n-1];
    int i=0;
    int j= n-1;
    while(i<j){
        if(s1 == s3){                  //if s1 is equal to s3 then this could be a possible answer but not the maximum one. 
            ans= s1;                   // Therefore we would store the value of this possible sum to a variable and then procees further.
            i++;
            s1= s1+ arr[i];            
        }
        else if (s1< s3){
            i++;
            s1 = s1 + arr[i];
        }
        else{
            j--;
            s3 = s3 + arr[j];
        }
    }
    
    return ans;    
}
