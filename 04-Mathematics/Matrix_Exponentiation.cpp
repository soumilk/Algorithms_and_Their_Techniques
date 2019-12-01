//
// Created by soumil on 8/8/2019.
// THIS IS THE PROGRAM OF FAST MATRIX EXPONENTIATION CONCEPT
// IN THIS PROGRAM WE CALCULATE THE VALUE OF THE FIBONACCI SERIES USING THIS FORMULA
// F(n)= T^(n-1)F1

#include<iostream>
#include <vector>
using namespace std;
#define ll long long        // Defining the long long as macro
ll k;
vector <ll> coff, value;

// This is the display function, which prints the matrix
void display(vector<vector<ll>> demo)
{
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cout<<demo[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Function to multiply the two matrix
vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{
    vector<vector<ll>> ans (k+1,vector<ll>(k+1));
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            for(int s=1;s<=k;s++)
            {
                ans[i][j]+=A[i][s]*B[s][j];
            }
        }
    }
    return ans;
}

// APPLYING THE POWERS TO THE TRANSFORMATION MATRIX
vector<vector<ll>> power(vector<vector<ll>> trans,ll n)
{
    if (n==1)
    {
        return trans;
    }
    vector<vector<ll>> t=power(trans,n/2);
    t=multiply(t,t);
    if (n&1)
    {
        t=multiply(t,trans);
    }
    return t;
}

// FUNCTION TO COMPUTE THE nth ELEMENT OF THE FIBONACCI SERIES
void compute( ll n)
{
    // Some base conditions
    if (n==0)
    {
        cout<<"The "<<n<<" term of the fibonacci"
            <<"series is "<<0<<endl;
        return;
    }
    // the values of indices less then or equal to k are already present
    if (n<=k)
    {
        cout<<"The "<<n<<" term of the fibonacci"
            <<"series is "<<value[n-1]<<endl;
        return ;
    }
    // Formation of the transformation matrix
    vector<vector<ll>> trans(k+1,vector<ll>(k+1));
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i<k)
            {
                if(i+1==j)
                {
                    trans[i][j]=1;
                }
                else {
                    trans[i][j] = 0;
                }
                continue;
            }
            trans[i][j]=coff[k-j];
        }
    }
    // calling the power function to calculate the T^(n-1)
    trans=power(trans,n-1);
    //display(trans);       // display the transformation matrix
    ll res=0;

    // Consider the first row of the transformation matrix and multiplication with the F1 matrix
    for(int i=1;i<=k;i++) {
        res += trans[1][i] * value[i-1];
    }
    cout<<"The "<<n<<" term of the fibonacci"
        <<"series is "<<res<<endl;
}
int main()
{
    ll n;
    cout<<"Enter the number of test cases"<<endl;
    cin>>n;
    k=2;
    
    coff.push_back(1);
    coff.push_back(1);
    
    value.push_back(1);
    value.push_back(1);
    
    while(n--) {
        cout << "Enter the term to find out" << endl;
        int temp;
        cin >> temp;
        compute(temp);
    }
    return 0;
}

