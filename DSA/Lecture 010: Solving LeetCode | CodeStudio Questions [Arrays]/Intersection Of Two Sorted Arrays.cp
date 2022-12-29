(https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1)

/*
Both the arrays are sorted in increasing order.
The output should be in increasing order of elements
*/

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    
    vector <int> ans;
	// Write your code here.
    int i=0, j=0; 
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]== arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
            j++;
    }
    return ans;
}
