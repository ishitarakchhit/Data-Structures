[https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTab=0]
 
/*
Find the value of {x^(n)}%m
*/
 
 //approac: fast exponentiation when n is odd then {(x^2)^(n/2)}*x and when n is even then (x^2)^(n/2)
 
#include <bits/stdc++.h> 
#include <bits/stdc++.h>
 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int result=1;
    while(n>0){
        if(n&1){                    //to check if n is odd or not
            result = ((1LL)*(result)%m * (x)%m ) %m;
        }       
        x = ((1LL)*(x)%m * (x)%m )%m;
        n= n>>1;                     //n=n/2
    }
    return result;
}
