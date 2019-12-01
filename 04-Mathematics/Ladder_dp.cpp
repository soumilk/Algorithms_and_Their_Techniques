//
// Created by soumil on 8/9/2019.
//
/* WHAT IS THE NUMBER OF WAYS TO REACH THE TOP WHEN N IS THE TOTAL NUMBER OF STEPS AND
   A PERSON CAN TAKE UP TO K STEPS AT A TIME
   SOLUTION: USING DYNAMIC APPROACH
*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

// APPROACH 1:
int count_steps(int n,int k)
{
    vector<int> ans;
    // this is the initial step which is taken to reach step 0
    ans.push_back(1);
    if (n==0)
    {
        return ans[0];
    }
    for(int i=1;i<=n;i++)
    {
        int temp=0;
        if (i<k)
        {
            for(int j=i-1;j>=0;j--)
            {
                temp+=ans[j];
            }
        }
        else{
            for(int j=i-1;j>=i-k;j--)
            {
                temp+=ans[j];
            }
        }
        ans.push_back(temp);
    }
    display(ans);
    return ans[n];
}

// APPROACH 2: Better one
int count_steps2(int n,int k)
{
    vector<int> ans;
    // this is the initial step which is taken to reach step 0
    ans.push_back(1);
    if (n==0)
    {
        return ans[0];
    }
    for(int i=1;i<=n;i++)
    {
        int temp=0;
        if (i<=k)
        {
            for(int j=i-1;j>=0;j--)
            {
                temp+=ans[j];
            }
        }
        else {
            // We have reformed the equation and this saves the time (saves k iterations of additions)
                temp= 2*ans[i-1]- ans[i-(k+1)];
                cout<<temp<<endl;
        }
        ans.push_back(temp);
    }
    cout<<"The dynamic array formed "<<endl;
    display(ans);
    return ans[n];
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
    //int ans=count_steps(n,k);
    int ans= count_steps2(n,k);
    cout<<"The number of ways to reach the "<<n<<" step are "<<ans;
    return 0;
}
