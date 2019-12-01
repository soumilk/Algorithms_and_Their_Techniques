//
// Created by soumil on 8/17/2019.
//
/*
 * This is the method to find the prime factors of a number.
 * We will solve this problem using the method of sieve.
 */
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

// This function will calculate the primes up to the square root of the given number
vector<int> sieve(int n)
{
    int s=int(ceil(sqrt(n)));
    short int arr[s+1]={0};
    arr[2]=1;
    //print(arr,s);
    for(int i=3;i<=s;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i<=s;i+=2)
    {
        if(arr[i])
        {
            for(int j=i*i;j<=s;j+=2*i)
            {
                arr[j]=0;
            }
        }
    }
    // This is the vector of only the primes
    vector<int>prime;
    for(int i=0;i<=s;i++)
    {
        if (arr[i])
            prime.push_back(i);
    }
    return prime;
}

// This function return the prime factor of the number
void factors(vector<int> prime,int num)
{
    vector<int>factors;
    int i=0;
    int p=prime[i];
    while(p*p<=num)
    {
        if(num%p==0) {
            factors.push_back(p);
            while (num % p == 0) {
                num = num / p;
            }
        }
        ++i;
        p=prime[i];
    }
    if(num!=1)
    {
        factors.push_back(num);
    }
    for(int i=0;i<factors.size();i++)
    {
        cout<<factors[i]<<" ";
    }
    return ;
}
int main()
{
    cout<<"Enter the number to find its prime factors"<<endl;
    int n;
    cin>>n;
    vector<int> prime=sieve(n);
    factors(prime,n);
    return 0;
}
