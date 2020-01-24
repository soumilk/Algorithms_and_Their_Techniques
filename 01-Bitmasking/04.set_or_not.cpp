/*
This is the Program which is an application of concept of masking using bitwose operators.
=> We need to determine that is the 'i'th bit of a number is set or not i.e. 1 or 0
*/

#include<iostream>
using namespace std;

// Function to determine the ith bit of the number 
int find_bit(int n,int bit)
{
		return n&(1<<(bit-1));
		// bit-1 because of the indexing
}

int main()
{
	int n=18;			// binary of 18= 10010 
	int bit=2;		 	// we need to find the 2nd bit of the number
						// we can see that the second bit of the number is 1
	
	// To find it, we need to take the & of the 18(10010) with mask(00010) and if the number is 
	// greater than the 0 then the bit is set(1) else the bit is no set (0) 
	
	int ans= find_bit(n,bit);
	if(ans>0)
	{
		ans=1;
	}
	else ans=0;
	cout<<"The "<<bit<<" bit of the number is "<<ans<<endl;
	return 0;  
}
