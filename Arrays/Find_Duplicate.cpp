/*
Let the size of the given array be N
The array contains elements from 1 to N-1 only.
*/

int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    for(int i=0; i<arr.size(); i++)          //elimincates the duplicate element present in the array
        ans=ans^arr[i];
    
    for(int i=1; i<arr.size(); i++)          //elimicates all the unique elements present in the array
        ans=ans^i;
    
    return ans;
	
}

int main(){
  int arr[10]={1,2,3,4,5,5};
  
  cout<<findDuplicate(arr);
  
  return 0;
}
