/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
      
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i])                          //considers the case when the array is rotated and sorted. So there will be a single element whose value is greater than the succeeding element
            count++;
        }
      
        if(nums[0]<nums[nums.size()-1])                   //considers the case when the array is sorted but not rotated. So the last element would be greater than the first.
        count++;

        return count<=1;                                  // if all the elements are equal then there would be no element whose succeeding or preeceding value is greater or lesser.
    }
};
