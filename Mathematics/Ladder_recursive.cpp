//
// Created by soumil on 8/9/2019.

/* WHAT IS THE NUMBER OF WAYS TO REACH THE TOP WHEN N IS THE TOTAL NUMBER OF STEPS AND 
   A PERSON CAN TAKE UP TO K STEPS AT A TIME
   SOLUTION: USING RECURSIVE APPROACH
*/

#include<iostream>
using namespace std;

// Recursive Approach 
int count_steps(int n,int k)
{
    // Base case
    if (n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

    // Recursive case
    int ans=0;
    int i=1;
    while(i!=k+1)
    {
        ans+=count_steps(n-i,k);
        i+=1;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number of steps"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the steps 'k' that a person can take at a time"
          "i.e. steps 1,2,...k steps"<<endl;
    cin>>k;
    int ans=count_steps(n,k);
    cout<<"The number of ways to reach the "<<n<<" step are "<<ans;
    return 0;
}

