/*
You are given with two arrays a and b with sizes n and m respectively. Each element in an array represend the digit of a number. Add the two arrays and store the digits of sum into a new array and return the digits.
*/

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    long long int sum=0;
    long int element1=0;
    long int element2=0;
    vector<int> temp;
    
    for(int i=0; i<n; i++){
        element1= element1*10 + a[i];
    }
    for(int i=0; i<m; i++){
        element2= element2*10 + b[i];
    }
    sum = element1 + element2;
    
    int num;
    int i=0;
    while(sum>0){
        num= sum%10;
        temp.push_back(num);
        i++;
        sum/= 10;        
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

//alternate solution

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //print(ans);
    reverse(ans.begin(), ans.end());
    return ans;
    
}
