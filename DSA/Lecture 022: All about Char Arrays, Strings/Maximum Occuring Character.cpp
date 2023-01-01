[https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1]
 
 /*
 Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100
 */
 

 //counting all the charaters in the given string and storing the count number in an array with size 26 and index str[i]-'a' with a mapping a=>0, b=>1 and so on. After we have counted all the characters we can traverse the new array and find the maximum character and returning i+'a'
 //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    
    public:
    
    //Function to find the maximum occurring character in a string    
    char getMaxOccuringChar(string str)
    {
         
         int arr[26]={0};
        // Your code here
        for(int i=0; i<str.length(); i++){
            arr[str[i]-'a']++;
        }
    
        int maxi=0;
        int temp;
        for(int i=0; i<26; i++){
            if(arr[i]>maxi){
                maxi=arr[i];
                temp=i;
            }
        }
        char s= temp + 'a';
        return s;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
