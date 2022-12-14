[https://leetcode.com/problems/rotate-image/]
 
 /*
 You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:
      1 2 3       7 4 1 
      4 5 6   =>  8 5 2 
      7 8 9       9 6 3

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

Example 2:
      5  1  9 11        
      2  4  8 10   =>  8  5  2 
     13  3  6  7     9  6  3
    
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 

Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000
 */
 
 //approach: shift all the elements by [i,j] => [j, n-i] where n= size of matrix -1 
 class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0; 
        int j=0; 
        int count=0;
        int n= matrix.size()-1;
        while(i<=n/2){
            while(j<=n-i-1){
                int temp= matrix[i][j];
                matrix[i][j]= matrix[n-j][i];
                matrix[n-j][i]= matrix[n-i][n-j];
                matrix[n-i][n-j]= matrix[j][n-i];
                matrix[j][n-i]= temp;
                j++;
                i=count;
            }
            count++;
            j= count;
            i= count;
        }
        
    }
};
 
 
 
//alternate approach 
 /*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/
void rotate(vector<vector<int> > &matrix) {
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}
