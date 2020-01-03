//
// Created by soumil on 10/12/2019.
//
/*
 * This is the pure DP method of finding out the nth term of the fibonacci number
 */
#include <iostream>
using  namespace std;

// Function to calculate the output of nth fibonacci sequence 
int fibo(int n) {
	// No recursion involved 
	
    int memo[100]={0};
    memo[0]=0;
    memo[1]=1;
    for(int i=2;i<=n;i++)
    {
        memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}

int fibo_1(int n)
{
	int a=0,b=1,c=a+b;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()
{
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<n<<"th term of series "<<ans<<endl;
    cout<<n<<"th term of series "<<fibo_1(n)<<endl;
    return 0;
}

