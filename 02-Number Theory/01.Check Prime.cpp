/*
 * This is the program to find out the number is prime number.
 * There are 3 methods mentioned below to find that the number is prime.
 * These methods have different time complexities. 
*/

#include<iostream>
using namespace std;

// METHOD-1: Check the divisibility till number n
void find_prime1(int n)
{
    int flag=1;
    //This is the method 1 with O(n) complexity
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    if (flag)
    {
        cout<<"Yes "<<n<<" is prime"<<endl;
    }
    else
    {
        cout<<"No "<<n<<" is not prime"<<endl;
    }
}

//METHOD 2: Check the divisibility till number n/2
void find_prime2(int n)
{
    int flag=1;
    //This is a little optimised method with O(n/2) complexity i.e. equivalent to O(n)
    for(int i=2;i<n/2+1;i++) {
        if (n % i == 0)
        {
            flag=0;
            break;
        }
    }
    if (flag)
    {
        cout<<"Number "<<n<<" is prime"<<endl;
    }
    else{
        cout<<"Number "<<n<<" is not prime"<<endl;
    }
}

// METHOD 3: Check the divisibility with the numbers till root n
void find_prime3(int n)
{
    // This is the most optimised method, with O(square root(n))
    int flag=1;
    for(int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Number "<<n<<" is prime"<<endl;
    }
    else{
        cout<<"Number "<<n<<" is not prime"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the prime number"<<endl;
    cin>>n;
    if (n==1)
    {
        cout<<n<<" is neither prime nor composite"<<endl;
        return 0;
    }
    find_prime1(n);
    find_prime2(n);
    find_prime3(n);
    return 0;
}
