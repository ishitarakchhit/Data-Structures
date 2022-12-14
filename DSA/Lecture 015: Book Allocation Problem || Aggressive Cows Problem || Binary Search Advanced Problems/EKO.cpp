(https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbWtieHBQWTJwc2dVaE9Ia21DWklIeFd1TFl3Z3xBQ3Jtc0trZmFONnZpLW0wb1k5QWE0V2dNQTNncFQ2bmZtd1pDVmhqZHBpMTEtb2dkRmpZTEZiQzF1M1MwRXZfczBPR01JTVMyS2phQ21tVW1SUjhGMUd1OUJDUkhMa2M2WDJYeHFiNFFLbmFaR0lDTnBnMlZnbw&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FEKO%2F&v=YTTdLgyqOLY)

/*
Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

Input
The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.

Output
The first and only line of output must contain the required height setting.

Example
Input:
4 7
20 15 10 17

Output:
15
Input:
5 20
4 42 40 26 46

Output:
36
*/


#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
	int sum=0;
	
	for(int i=0; i<n; i++){
		if(arr[i]-mid < 0)
		 continue;
		else 
		 sum= (arr[i]- mid) + sum;
	}
	
	if( sum>= k)
	 return true;
	else
	 return false;
}

int eko(int arr[], int n, int k){
	int s=0; 
	int e=-1;
	 
	for(int i=0; i<n; i++){
		e=max(e, arr[i]);
	}
	
	int mid= s+ (e-s)/2;
	int ans=-1;
	
	while(s<=e){
		if(isPossible(arr, n, k, mid)){
			ans= mid;
			s=mid+1;
		}
		else
		 e= mid-1;
		mid= s+ (e-s)/2;
	}
	return ans;
}


int main() {
	
	// your code here
    
    int k, n;

    cout<<"Enter the number of trees to be cut";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the size of trees";
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    }

    cout<<"Enter the wood required";
    cin>>k;
    
    cout<<eko(arr, n, k);


	  return 0;
}
