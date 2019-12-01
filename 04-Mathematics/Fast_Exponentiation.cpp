//
// Created by soumil on 8/7/2019.
//
#include<iostream>
using namespace std;

int power(int number,int exponent)
{
    // base case
    if(exponent==0)
    {
        return 1;
    }

    // Recursive case
    int ans =power(number,exponent/2);
    ans *= ans;

    if (exponent&1)
    {
        ans=ans*number;
    }
    return ans;
}
int main()
{
    int number, exponent;
    cout<<"Enter the number and the exponent"<<endl;
    cin>>number>>exponent;
    cout<<power(number,exponent);
    return 0;
}
