/*
Bob is out to buy a binary string of size 'N'. The shopkeeper gave him an integer 'P', a binary string 'S' and defined its cost as:
Cost = S[0] * (P^0) + S[1]*(P^1) + S[2]*(P^2) ... S[N-1]*(P^(n-1))
Since bob was an old customer, the shopkeeper allowed him to do exactly two operations on this string to mak eits cost as low as possible. 
In each operation, Bob can select any index and flip its bit, i.e. if it was '0' it will become '1' or vice versa. Bob can select a single index multiple times.
Help bob find the final string with minimum possible cost after performing exactly two operations on the given string.
*/


//approach- always the expression from the farther end would carry the maximum price so revert the number from farther end but if you only have a single '1' then revert it and then convert the first element to 1 so that the value comes out to be minimum.
#include <bits/stdc++.h> 
string binaryShopping(string S, int P)
{
    // Write your code here.   
    int count=0;
    for(int i=S.size(); i>=0; i--){
        if(S[i]=='1'){
            S[i]='0';
            count++;
        }
        if(count== 2)
            return S;
     }
    if(count==1){
        S[0]='1';
    }
    return S;
}
