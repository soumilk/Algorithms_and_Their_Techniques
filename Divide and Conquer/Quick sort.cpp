#include<iostream>
using namespace std;

// This is the code for quick sort in c++
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int partition(int *arr,int left,int right)
{
	int pivot=arr[right];
	int i=left-1;
	for (int j=left;j<right;j++)
	{
		if (arr[j]<=pivot)
		{
			i++;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(arr[right],arr[i+1]);
	return (i+1);
}
void quicksort(int *arr, int left,int right)
{
	if( right>left)
	{
		int q=partition(arr,left,right);
		quicksort(arr,left,q-1);
		quicksort(arr,q+1,right);
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
