/*
This is the program to demonstrate the concept of the bitmasking,
=> We need to set the 'i'th bit of the number in the binary sequence of a number
*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

// Function to set the ith bit of the number 
int set_bit(int n,int bit)
{
		return n|(1<<(bit-1));
		// bit-1 because of the indexing
}

int main()
{
	int n=18;			// binary of 18= 10010 
	int bit=4;		 	// we need to set the 4th bit of the number
	
	// To set it, we need to take the OR(|) of the 18(10010) with mask(01000) and according to the 
	// property of the OR, if any bit is OR with 1, then the result is set(1) bit
	
	int ans= set_bit(n,bit);		// Result should be (11010) i.e. 26
	cout<<"The resultant after setting the "<<bit<<"th bit is "<<ans<<endl;
	return 0;  
}
