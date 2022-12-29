(https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbWFxYThpWmlqdW80VS1sWUFRUnQza3kxVkNRQXxBQ3Jtc0tscDhJYmk5Wm1JN1VzelBfaGRsRVk2QUhHYzR3QnFia0tvd0xCd0pXR0tuakhoUXVUckZqVTZLNGtWcXFlbkRiQ3VNWEQxcXk3ZjlwdElpVkNXQ1VJaFVFS2tjZGtXbENvakJPQWNoT2FYS0FwUWlfQQ&q=https%3A%2F%2Fbit.ly%2F3EwlU6e&v=oVa8DfUDKTw)

/*
Each pair should be sorted in increasing order i.e. the pairs are sorted according to the first element of each pair and if they are same then according to the 2nd element
The elements inside each pair should be in increasing order.
*/

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector <vector <int>> ans;
    
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            
            if(arr[i]+arr[j]==s){
                vector <int> temp;
               temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
