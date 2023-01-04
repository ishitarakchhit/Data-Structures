[https://leetcode.com/problems/permutation-in-string/description/]
 
 /*
 Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 */
 
 //Approach: Sliding Window;
 // Store all the occurences of string s1 into array temp1 and store occurences of the length of the window of string s2 into array temp2
 // if temp1== temp2 then return true otherwise remove the occurence of window's first character and add the occurence of the next character of window to the window
 
 class Solution {
private:
    bool isEqual(int temp1[26], int temp2[26]){
        for(int i=0; i<26; i++){
            if(temp1[i]!= temp2[i])
               return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int temp1[26]={0};
        int temp2[26]={0};
        
        if(s1.length()> s2.length())
            return false;


        for(int i=0; i<s1.length(); i++){
            temp1[s1[i]-'a']++;
        }

        for(int i=0; i<s1.length(); i++){
            temp2[s2[i]-'a']++;
        }

        int i=0; 
        int j= s1.length()-1;
        while(j<s2.length()){
            if(isEqual(temp1, temp2))
                return true;
            else {
                temp2[s2[i]-'a']--;
                i++;
                j++;
                if(j==s2.length())
                   return false;
                temp2[s2[j]-'a']++;
                
            }
        }

        return false;

        
    }
};
