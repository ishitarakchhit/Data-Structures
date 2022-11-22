/*
You have to allocate the blocks to painters in contiguous manner so that it takes minimum time for the blocks to be painted
*/


bool isPossible( vector<int> &arr, int n, int k, int mid){
    int boards=0;
    int painter=1;
    
    for(int i=0; i<n; i++){
        if(boards + arr[i] <=mid){
            boards+= arr[i];
        }
        else{
            painter ++;
            if(painter >k || arr[i]>mid){
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
    //    Write your code here.
    int s=0; 
    int e=0;
    int ans=-1;
    int n=arr.size();
    int mid= e + (s-e)/2;
    
    
    for(int i=0; i<n; i++){
        e= e + arr[i];
    }
    
    while(s<=e){
        if(isPossible(arr, n, k, mid )){
            ans= mid;
            e=mid-1;
        }
        else 
            s= mid+1;
        
        mid= e + (s-e)/2;
    }
    
    return ans;
}
