//
// Created by soumil on 8/23/2019.
//
/*
 * This is the program of the fibonacci series.
 * Simple implementation of recursion to understand it better.
 * Series: 0 1 1 2 3 5 8 13 21 34 .... 
*/

#include <iostream>
using namespace std;

int fibonacci_series(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    int x2=fibonacci_series(n-1);
    int x1=fibonacci_series(n-2);
    return x1+x2;
}
int main()
{
    int n;
    cout<<"Enter the nth term of fibonacci series to find out"<<endl;
    cin>>n;
    cout<<fibonacci_series(n);
    return 0;
}

