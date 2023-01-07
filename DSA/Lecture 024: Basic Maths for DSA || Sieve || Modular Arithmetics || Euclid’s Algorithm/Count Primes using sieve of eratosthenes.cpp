[https://leetcode.com/problems/count-primes/]
 
 /*
 Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106
 */
 
 //Approach 1: with time complexity: O(n*n)
 
 class Solution {
private:
    bool check(int i){
        int k=2;
        if(i==2)
           return true;
        while(k<=sqrt(i)){
            if(i%k ==0)
               return false;
               k++;
        }
        return true;
    }
public:
    int countPrimes(int n) {
        int count=0;
        for(int i=2; i<n; i++){
            if(check(i)){
                count++;
            }
        }
        return count;
    }
};
 
 
 //Approach 2:  sieve of eratosthenes
 class Solution {
public:

    int countPrimes(int n) {
        vector<bool> prime(n+1, 1);
        prime[0]= prime[1]=0;

        int count =0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;

                for(int j= i*2; j<n; j= j+i){
                    prime[j]= 0;
                }
            }
        }
        return count;
    }
};
