/*
You are given an array. Find three distinct triplets which adds up to the given number k.
*/

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector <vector <int>> ans;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++ ){
                if(arr[i]+ arr[j] + arr[k] == K){
                    vector <int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    
                    sort(ans.begin(), ans.end());
                    
                }
                
            }
        }
        
    }
    sort(ans.begin(), ans.end());
    return ans;
}
