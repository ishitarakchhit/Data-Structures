/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=0;
        while(x<=n/2 && x<31){
            if(pow(2,x)==n)
                return true;
            x++;
        }
        return false;
    }
};
