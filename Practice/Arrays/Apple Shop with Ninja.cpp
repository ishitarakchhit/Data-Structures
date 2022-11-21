/*first we sorted the array and then found the sum of this array by ignoring the (n-m)th element*/




long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    long long sum= 0; 
    sort(arr.begin(), arr.end());
    for( int i=0; i<n; i++){
        if(i == (n-m)){
            continue;
        }
        else
         sum = sum + arr[i];
    }
    
    return sum;
}
