#include<iostream>
using namespace std;

float knapsack(float p[],float w[], float weight,int n)
{
	float cost=0;
	int i=0;
	for(i=n-1;i>=0;i--)
	{
		if(w[i]>weight)
		{
			break;
		}
		cost=cost+p[i];
		weight=weight-w[i];
	}
	if(i>=0)
	{
		cost=cost+(weight/w[i])*p[i];
	}
	return cost;
}
int main()
{
	int n;
	float weight;
	cout<<"Enter the number of objects"<<endl;
	cin>>n;
	cout<<"Ente the amount the knapsack can contain"<<endl;
	cin>>weight;
	float p[n],w[n],r[n];
	cout<<"Enter the profit and weight of the object"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the profit "<<" ";
		cin>>p[i];
		cout<<"Enter the weight "<<" ";
		cin>>w[i];
		r[i]=p[i]/w[i];
		cout<<endl;
	}
	// now to sort the ratio array and according to that sorting the weight and profit array 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if( r[i]>r[j])
			{
				float temp=r[i];
				r[i]=r[j];
				r[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=w[i];
				w[i]=w[j];
				w[j]=temp;
			}
		}
	}
	cout<<"The sorted arrays are "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"profit "<<p[i]<<" weight "<<w[i]<<" ratio "<<r[i]<<endl;
	}
	cout<<"The maximum profit would be "<< knapsack(p,w,weight,n);
	// Now to maximise the profit we need to calculate the profit/weight 
	return 0;	
}
