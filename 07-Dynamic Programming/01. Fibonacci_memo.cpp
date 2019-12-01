/*
 * This is the program of the fibonacci series using DP memoization
 */

#include<iostream>
using namespace std;
#define ll long long

// We have created this memory array to keep the record of all the values that we have already computed
ll memo[100];
ll fibo(ll n)
{
    // Base case
    if(n==0 || n==1)
    {
        return n;
    }
    
    // If the memo array has the value of the number then return it from the array 
    if (memo[n]!=-1)
    {
        return memo[n];
    }
    
    ll ans =fibo(n-1)+fibo(n-2);
    memo[n]=ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        memo[i]=-1;
    }
    int ans=fibo(n);
    cout<<"The fibonacci number for "<<n<<" is: "<<ans;
    return 0;
}
