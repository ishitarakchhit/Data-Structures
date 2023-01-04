[https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/]
 
 /*
 You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
 */
 
 /*Approch: using stack
 push all the elements from string s to stack temp if top element of stack is not equal to s[i] or if stack is empty. Else if top element of temp is equal to s[i] then pop temp[top].
 once traversal is done pop out all elements from temp to ans and then reverse ans to obtain final result.
 */
 
 class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>temp;
        string ans;
        int i=0;
        while(i<s.length()){
            if(temp.empty() || temp.top()!= s[i]){
                temp.push(s[i]);
                i++;
            }
            else{
                temp.pop();
                i++;
            }
        }

        
        while(!temp.empty()){
            ans.push_back(temp.top());
            temp.pop();
        }
        reverse(ans.begin(), ans.end());

        
        return ans;
    }

};
 
