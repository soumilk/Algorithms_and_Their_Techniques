//
// Created by soumil on 7/16/2019.
//
/*
 * HERE WE ARE GONNA USE THE CONCEPT OF XOR SWAPPING.
 * SWAPPING IS DONE WITH THE HELP OF XOR AND ITS REALLY FAST
 */
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
    int a=10,b=20;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    swap(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;
}
