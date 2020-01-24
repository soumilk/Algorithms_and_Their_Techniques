/*
This is the program to demonstrate the concept of the bitmasking,
=> We need to clear the 'i'th bit of the number in its binary sequence
*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

// Function to clear the 'i'th bit of the number 
int clear_bit(int n,int bit)
{
	// To make the mask first create the mask (10000)
	int mask= 1<<(bit-1);
	// Now for masking the mask (01111), we neet to take the NOT(~) of this mask
	mask=~mask;
	return n&mask;
	// bit-1 because of the indexing
}

int main()
{
	int n=18;			// binary of 18= 10010 
	int bit=5;		 	// we need to clear the 5th bit of the number
	
	// To clear it, we need to take the &(AND) of the 18(10010) with mask(01111) and according to the 
	// property of the AND, if any bit is AND with 0, then the result is not set(0) bit
	
	int ans= clear_bit(n,bit);		// Result should be (00010) i.e. 2
	cout<<"The resultant after clearing the "<<bit<<"th bit is "<<ans<<endl;
	return 0;  
}
