//
// Created by soumil on 7/16/2019.
//

/*
 * WE NEED TO FIND THE BITS WHICH ARE REQUIRED TO CHANGE ONE NUMBER TO ANOTHER NUMBER
 */
#include <iostream>
using namespace std;

void method1(int num1, int num2,int ans)
{
    int xxor = num1^num2;
    //cout<<xxor<<endl;
    while(xxor>0)
    {
        if (xxor ^ 1)
        {
            ans++;
        }
        xxor=xxor>>1;
        //cout<<xxor<<" ";
    }
    cout<<"\nMETHOD1-Number of bits to be changed are "<<ans<<endl;
}

void method2(int num1, int num2,int ans)
{
    int xxor=num1^num2;
    while(xxor>0)
    {
        ans++;
        xxor=xxor&(xxor-1);
    }
    cout<<"\nMETHOD2-Number of bits to be changed are "<<ans<<endl;
}
int main()
{
    int num1=12;
    int num2=9;
    int ans=0;
    cout<<"Numbers are "<<num1<<" "<<num2<<endl;

    // METHOD 1- USING XOR
    method1(num1,num2,ans);

    // METHOD 2- n&(n-1) rule
    method2(num1,num2,ans);
    return 0;
}
