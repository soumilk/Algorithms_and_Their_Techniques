//
// Created by soumil on 8/24/2019.
//
/*
 * This program demonstrate the recursive application of the multiplication.
 * The condition is we need to multiply 2 numbers but without using the
   multiplication operator.
 */

#include <iostream>
using namespace std;

int multiply(int n, int m){
    // Base case
    if (n==0 ||m==0)
    {
        return 0;
    }

    // Recursive case when number answer will be >0
    if(m>0)
    {
        int ans=n+multiply(n,m-1);
        return ans;
    }

    // Recursive case when answer will be <0
    else{
        int ans=-multiply(n,-m);
        return ans;
    }

}

int main()
{
    int n,m;
    cout<<"Enter the numbers to multiply"<<endl;
    cin>>n>>m;
    cout<<multiply(n,m);
    return 0;
}
