/*
Ninja recently appeared for a class test. The test was attended by 'N' students and the marks of each student was given in an array 'A'.
Ninja knows that he got a rank 'k' among the 'N' students but forgot the marks achieved by him. The ranks are given according to the better marks scored by the students.
Tell the marks that must have been scored by Ninja to get a rank 'k'.
*/

#include <bits/stdc++.h> 
int classTest(int n, vector<int> &a, int k) {  //approach- we sorted the array and picked the n-k th element which has to be the rank of the given student.
    // Write your code here.
    sort(a.begin(), a.end());
    
    return a[n-k];
}
