/*
This is the program to demonstrate a concept of the bitmanipulation,
=> We are given a sequence of numbers, every number is repeated 3 times except one number, 
   we need to find that unique number.

=> SOLUTION:
   Count the total number of bits contributed by each number in the arrray and then take the mod with the 
   total number of times each number is repeated, i.e. 3, this eliminates the bits which are from a specific 
   number and the end result of bit combination is the bit which is unique. 
*/

#include<iostream>
using namespace std;

int find_unique_III(int arr[],int size)
{
	// Array to keep the count of bits contributed by each number
	int bit_count[10]={0};
	// Here we are counting and storing the bits 
	for(int i=0;i<size;i++)
	{
		int k=0;
		while(arr[i]>0)
		{
			if(arr[i]&1)
			{
				bit_count[k]+=1;
			}
			k++;
			arr[i]=arr[i]>>1;
		}
	}
	int answer=0;
	for(int i=0;i<10;i++)
	{
		bit_count[i]%=3; 	// Taking the mod with 3, as bits are repeated 3 times
		answer+=bit_count[i]*(1<<i);
	}
	return answer;
}
int main()
{
	// This is the array in which we are given the elements which are repeated 3 times expect '4'. 
	// Output the answer=4
	int arr[]={1,1,4,7,3,5,5,1,5,3,7,3,7};
	int ans=find_unique_III(arr,sizeof(arr)/sizeof(int));
	cout<<"The Unique element is "<<ans<<endl;
	return 0;
}
