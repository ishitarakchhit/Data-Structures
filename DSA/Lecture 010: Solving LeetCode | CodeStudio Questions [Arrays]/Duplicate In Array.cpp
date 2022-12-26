/*
Find the duplicate in an array where all the elements lie in [1,n-1] and occur once with a single element occuring twice
*/
int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    for(int i=0; i<arr.size(); i++)
        ans=ans^arr[i];
    
    for(int i=1; i<arr.size(); i++)
        ans=ans^i;
    
    return ans;
	
}
