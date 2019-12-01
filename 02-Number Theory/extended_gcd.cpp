//
// Created by soumil on 8/17/2019.
//
/*
 * This is the program in which we will extend the implementation of the euclid's GCD
 * The problem is to find out the x and y which satisfies the equation :
            Ax + By =GCD(A,B)
 */

#include<iostream>
using namespace std;

int x,y,gcd;
void extended_gcd(int a,int b)
{
    if (b==0)
    {
        x=1;
        y=0;
        gcd=a;
        return ;
    }
    extended_gcd(b,a%b);
    int cx,cy;
    cx=y;
    cy=x-(a/b)*y;
    x=cx;
    y=cy;
}
int main()
{
    cout<<"Provide the input for A abd B in Ax + By =GCD(A,B)"<<endl;
    int a,b;
    cin>>a>>b;
    extended_gcd(a,b);
    cout<<"x :"<<x<<"\t"<<"y :"<<y<<endl;
    return 0;
}
