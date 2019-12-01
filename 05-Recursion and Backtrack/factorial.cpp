//
// Created by soumil on 8/23/2019.
//
// This is the program for the introduction of the recursion.
// Here is the simple recursive approach to find out the factorial of a number.

#include<iostream>
using namespace std;

long long fact (long long n)
{
    // Base case
    if (n==0)
    {
        return 1;
    }

    // Recursive case
    long long ans=n*fact(n-1);
    return ans;
}
int main()
{
    long long n;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}
