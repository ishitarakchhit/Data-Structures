(https://leetcode.com/problems/find-all-duplicates-in-an-array/description/)
/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        
        int a[100000]={0};

        for(int i=0; i<nums.size(); i++){
            if(a[nums[i]-1]){
                ans.push_back(nums[i]);
                continue;
            }
            a[nums[i]-1]=1;
        }

        return ans;
    }
};
