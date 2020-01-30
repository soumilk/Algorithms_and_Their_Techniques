/*
This is the program to demonstrate a concept of the bitmanipulation,
=> We are given a sequence of numbers, every number is repeated 2 times except one number, 
   we need to find that unique number.

=> SOLUTION:
   Here the solution is simple, All we need to know is the propety of the XOR(^) operator, 
   the XOR operations output =0 for the same bits and 1 for the different bit, all we need to 
   do to find the unique number is to apply the XOR operation to the numbers, the same numbes 
   will be 0 and only left number will be the unique one. 
*/

#include<iostream>
using namespace std;

int main()
{
	// This is the array in which we are given the elements which are repeated 2 times expect '4'. 
	// Output the answer=4
	int arr[]={1,1,4,7,3,5,7,3,4};
	int ans=0;
	// Apply the XOR operation 
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		ans=ans^arr[i];
	}
	cout<<"The Unique element is "<<ans<<endl;
	return 0;
}
