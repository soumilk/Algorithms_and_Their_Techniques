//
// Created by soumil on 8/20/2019.
//
/*
 * This is the program to find out the multiplicative modulo inverse.
 * It is calculated using the extended euclid's GCD method.
 * In the form of (a*b)%m=1, we will find out the value of b.
 * 'b' is the multiplicative modulo inverse of 'a' with respect to m.
 */

#include<iostream>
using namespace std;
#define ll long long

ll x,y;
void extended_euclid(ll a,ll m)
{
    if (m==0)
    {
        x=1;
        y=0;
        return ;
    }
    extended_euclid(m,a%m);
    ll cx=y;
    ll cy=x- (a/m)*y;
    x=cx;
    y=cy;
}

ll inverse_modulo(ll a,ll m)
{
    // Now, this relation deduces in the form of Ax + By =1, in which x and y
    // can be calculated using the extended eucledian method.
    extended_euclid(a,m);
    return (x+m)%m;
}
int main()
{
    cout<<"The value of 'a' and 'm' in (a*b)%m =1 equation to calculate b"<<endl;
    ll a,m;
    cin>>a>>m;
    cout<<inverse_modulo(a,m);
    return 0;
}
