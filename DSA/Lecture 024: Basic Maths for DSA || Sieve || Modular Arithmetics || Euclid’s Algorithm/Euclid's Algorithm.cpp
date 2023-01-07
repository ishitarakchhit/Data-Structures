//finds the gcd of two numbers.
//can also use formula gcd(a,b) = gcd (a%b, b)

#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int gcd(int a, int b){
    if(a==0)
       return b;
    if(b==0)
       return a;

    while(a!=b){
        if(a>b){
            a= a-b;
        }
        else 
            b= b-a;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter the numbers";
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);

    

}
