//
// Created by soumil on 8/18/2019.
//
/*
 * This is the method to calculate the fast modulo exponentiation.
 * The time complexity is O(log(power)).
 */

#include <iostream>
using namespace std;
#define ll long long

// This function is implementing the fast exponentiation method

ll modulo_expo(ll num, ll power, ll modulo)
{
    ll res=1;
    while(power>0)
    {
        if (power&1)
        {
            res=(res*num)%modulo;
        }
        num=(num*num)%modulo;
        power=power>>1;
    }
    return res;
}
int main()
{
    ll num,power,modulo;
    cout<<"Enter the number, power and modulo "<<endl;
    cin>>num>>power>>modulo;
    ll ans= modulo_expo(num,power,modulo);
    cout<<ans<<endl;
    return 0;
}
