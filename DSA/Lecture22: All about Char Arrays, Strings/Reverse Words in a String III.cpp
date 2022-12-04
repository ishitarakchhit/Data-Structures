/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"
*/

class Solution {

public:
    string reverseWords(string s) {

        string temp;
        int i=0;
        for(int j=0; j<=s.length(); j++){     //run a loop to find the bank spaces or null terminator or hence to find the end of a word
            if(s[j]==32 || s[j]=='\0'){       // once you have found the end of a word you can reverse it using while loop
                int start = i;
                int end = j-1;
                while(start<=end){
                    swap(s[start++], s[end--]);               
                }
                i=j+1;                        //allocate the starting of next word to i 
            }
           
        }

        return s;      
    }

};
