//
// Created by soumil on 8/17/2019.
//
/*
   This is the method to find the prime numbers via a method called
   Sieve of Eratosthenes.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which we need to calculate the primes"<<endl;
    cin>>n;
    //Making a boolean array and setting up every index as 1
    bool arr[n];
    arr[0]=0;
    arr[1]=0;
    // Initilising the boolean array with 1
    for(int i=2;i<n;i++)
    {
        arr[i]=1;
    }

    // Making the value of the indices which are non zero
    for(int i=2;i<n;i++)
    {
        if(arr[i])
        for(int j=2*i;j<n;j+=i)
        {
            arr[j]=0;
        }
    }

    // All the prime numbers till
    for(int i=0;i<n;i++)
    {
        if(arr[i])
            cout<<i<<" ";
    }
    return 0;
}
