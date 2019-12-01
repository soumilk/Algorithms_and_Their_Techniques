#include<iostream>
using namespace std;

int max(int a,int b){
	return (a>b)?a:b;
}
void knapsack(int n,int val[],int weight[],int W)
{
	// first forming table 
	int k[n+1][W+1]={0};
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W ;j++)
		{
			if (i==0 || j==0)
			{
				k[i][j]=0;
			}
			else if( weight[i-1]>j)
			{
				k[i][j]=k[i-1][j] ;
			}
			else
			{
				k[i][j]=max( k[i-1][j], k[i-1][j-weight[i-1]]+val[i-1]);
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			cout<<k[i][j]<<" ";
		}
		cout<<endl;
	}
	
  // Now including objects in the knapsack
    int res = k[n][W]; 
    int  w = W; 
    for (int i = n; i > 0 && res > 0; i--) 
    { 
        if (res == k[i - 1][w])  
            continue;         
        else { 
            cout<<"object with weight "<<weight[i - 1]<<" and value "<<val[i-1] << " is included"<<endl; 
            res = res - val[i - 1]; 
            w = w - weight[i - 1]; 
        } 
    }
}
int main()
{
	int n;
	cout<<"Enter the number of objects"<<endl;
	cin>>n;
	int val[n],weight[n];
	cout<<"Enter values "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\n For object "<<i<<endl;
		cin>>val[i]>>weight[i];
	}
	cout<<"Enter capacity of knapsack "<<endl;
	int W;
	cin>>W;
	knapsack(n, val, weight, W);
	return 0;
}
