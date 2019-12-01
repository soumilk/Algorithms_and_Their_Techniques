//
// Created by soumil on 8/23/2019.
//
/*
 * This is the program to find out the power of the number via recursion.
 * There are 2 methods which are provided below, onw which takes more time
   i.e. of the order of O(power) and another is fast which takes time of
   the order of O(log(power))
 */

#include <iostream>
using namespace std;
#define ll long long

// METHOD 1: Slow Exponentiation
ll normal(ll num, ll power)
{
    // Base case
    if (power==1)
    {
        return num;
    }
    // Recursive case
    return num*normal(num,power-1);
}

// METHOD 2: Fast exponentiation
ll fast_expo(ll num, ll power)
{
    // Base case
    if(power==0)
    {
        return 1;
    }

    // Recursive case
    ll ans= fast_expo(num,power/2);
    ans*=ans;
    if (power&1)
    {
        ans=num*ans;
    }
    return ans;
}

int main()
{
    ll num, power;
    cout<<"Enter the number and its power to evaluate "<<endl;
    cin>>num>>power;
    cout<<"Slow Method "<<normal(num,power)<<endl;      // Slower, takes O(power) time
    cout<<"Fast Method "<<fast_expo(num, power)<<endl;  // Slower, takes O(log(power)) time
    return 0;
}
