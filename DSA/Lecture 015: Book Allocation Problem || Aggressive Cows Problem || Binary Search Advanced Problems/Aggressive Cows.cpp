(https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0tEb2lzQnlfRTFJeU1PcEllZmpKOFA3ejdUZ3xBQ3Jtc0ttanRZS3VjXzl5R2dnbnNiMFR3bEpsS2V2dm0wWUItVEhCQXJpWWI3R2VGRnlNRnNQNll2WjA0NkFacjdpSGlmZFFhS1laSThjSXh2b3F1OWRUNkVMLUdHaTBvNDAyX00yVk5ZVTV6cnhWOG8zb3o5RQ&q=https%3A%2F%2Fbit.ly%2F3dkuQ2B&v=YTTdLgyqOLY)

/*
Allot positions to cows so that the minimum distance between each cow is maximum.
*/


//function to return wheter it is possible to place a cow at a certain position or not keeping in mind the maximum distance passed in the function
bool isPossible(vector<int> &arr, int k, int mid){
    int cow=1;
    int n= arr.size();
    int lastpos=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastpos >= mid){
            cow++;
            if(cow==k)
                return true;
            lastpos= arr[i];
        }
    }
    return false;
}


//function to perform binary search and find the maximum of the minimum distance between the cows
int aggressiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int s=0;
    int e=-1;
    int ans=-1;
    int n = arr.size();
    for(int i=0; i<n; i++)
        e=max(e, arr[i]);
    
    int mid= e+(s-e)/2;
    
    while(s<=e){
        if(isPossible(arr, k, mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e= mid-1;
        }
        mid = e + (s-e)/2;
    }
    
    return ans;
    //    Write your code here.
}
