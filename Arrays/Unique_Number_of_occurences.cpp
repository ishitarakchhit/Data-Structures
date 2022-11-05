/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/


#include <iostream>
using namespace std;

bool unique(int arr[], int size)
{
   int a[1000] = {0};

   
        for(int i = 0; i < size; i++){
            int count = 0;
            if(arr[i] == 1001)  
                continue;
            
            for(int j = i+1; j < size; j++){
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = 1001;
                }
            }
            if(a[count])  return false;
            else  a[count] = 1;
        }
        return true;
}




int main()
{
    int arr[6] = {1,2,2,1,1,3};

    cout << unique(arr, 6);
}