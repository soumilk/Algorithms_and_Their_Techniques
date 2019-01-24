#include<iostream>
using namespace std;

void merge (int arr[],int l,int q,int r)      // This is the heart of the algorithm
{
	int n1=q-l+1;
	int n2=r-q;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(int j=0;j<n2;j++)
	{
		R[j]=arr[q+j+1];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		k++;
		j++;
	}
}
void mergesort(int arr[],int l,int r)
{
	if(r>l)
	{
		int q=l+(r-l)/2;        // same as the (l+r)/2 but prevents overflow
		mergesort(arr,l,q);
		mergesort(arr,q+1,r);
		merge(arr,l,q,r);
	}
}
int main()
{
	int n;
	cout<<"Enter the numbers in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
