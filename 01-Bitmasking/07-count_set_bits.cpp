/*
This is the program to demonstrate the concept of the bitmasking,
=> We need to find the total number of set(1) bits in the binary sequence of a number 
*/

#include<iostream>
using namespace std;

// There are 2 methods to find out the total number of set (1) bits in the binary sequence 

// METHOD -1 : Using AND (&) operator, complexity O(log n)  
int count_set_bits1 (int number )
{
	int counter=0;
	while(number>0)
	{
		if (number &1)
		{
			counter ++;	
		}	
		number =number >>1;
	}	
	return counter;
} 

// METHOD -2 : Using n & (n-1) method, This is much Efficient method
// Complexity, O(number of set bits), in worst case O(log n)
int count_set_bits2(int number)
{
	int counter=0;
	while(number>0)
	{
		number =number& (number -1);
		counter++;
	}
	return counter;
}

int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin >>n;
	cout<<"Method 1 : Number of set bits are "<<count_set_bits1(n)<<endl;
	cout<<"Method 2 : Number of set bits are "<<count_set_bits2(n)<<endl;
	return 0;
}
