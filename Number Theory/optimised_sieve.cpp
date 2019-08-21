//
// Created by soumil on 8/17/2019.
//
/*
 * This is the method to find the prime numbers via a method called
   Sieve of Eratosthenes.
 * This is a little optimised method having complexity of
   O(n loglog(n))
 * The term loglog(n) is very small and almost like a constant, so this
   method is approximately takes the linear time.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number up to which we need to calculate the primes"<<endl;
    cin>>n;
    //Making a boolean array and setting up every index as 0
    bool arr[n]={0};
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    //Optimisation 1: Initialising the boolean array with 1 only on odd indices
    for(int i=3;i<n;i+=2)
    {
        arr[i]=1;
    }

    // Making the value of the indices which are non zero
    // Optimisation 2: Running loop only for the odd indices
    for(int i=3;i<n;i+=2)
    {
        if(arr[i])
            // Optimisation 3: starting the j with i^2
            // Optimisation 4: incrementing the loop with 2 times i, because only then the
            //                 the number will be odd.

            for(int j=i*i;j<n;j+=2*i)
            {
                arr[j]=0;
            }
    }

    // All the prime numbers till n
    for(int i=0;i<n;i++)
    {
        if(arr[i])
            cout<<i<<" ";
    }
    return 0;
}
