/*
 * HERE WE ARE GONNA USE THE CONCEPT OF XOR SWAPPING.
 * SWAPPING IS DONE WITH THE HELP OF XOR AND ITS REALLY FAST
 */
#include <iostream>
using namespace std;

// Function to perform xor swapping. 
void swap(int &a, int &b)
{
    a=a^b;	// After this operation a is the result of a^b
    b=a^b;	// In this step, its actually b= a^b^b, and b^b is zero, so now b=a 
    a=a^b;	// In this step, its actually a=a^b^a, and a^a=0, so now a=b
}

int main()
{
    int a=10,b=20;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    swap(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;
}
