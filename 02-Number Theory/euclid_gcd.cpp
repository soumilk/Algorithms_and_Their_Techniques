//
// Created by soumil on 8/17/2019.
//
/*
 * This is the program to calculate the GCD of two numbers.
 * We can also find th LCM of 2 numbers after calculating the HCF of the number.
 */

#include<iostream>
using namespace std;

// Euclids method to find the GCD of 2 numbers
int gcd(int n,int m)
{
    if (m==0)
    {
        return n;
    }
    return gcd(m,n%m);
}

// LCM of 2 numbers via property
    // a*b = LCM(a,b)*HCF(a,b)
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int n,m;
    cout<<"Enter the two numbers to find their GCD"<<endl;
    cin>>n>>m;
    int ans=gcd(n,m);
    cout<<"GCD :"<<ans<<endl;
    cout<<"LCM :"<<lcm(n,m)<<endl;
    return 0;
}
