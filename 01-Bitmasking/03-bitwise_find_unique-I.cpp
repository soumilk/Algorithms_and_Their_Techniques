/*
 * THERE ARE N NUMBERS IN AN ARRAY, EVERY NUMBER IS REPEATED TWICE EXCEPT ONE NUMBER, FIND
   THAT NUMBER.
 * USE OF EXTRA SPACE IS NOT ALLOWED.
 * ARRAY CAN'T BE UPDATED.
 * THE CONCEPT USED HERE:
 	Whenever we xor the same bits, it results in the zero, now just apply the same logic to 
 	the numbers, whenever we apply the xor operator to the same numbers, the output is zero.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array "<<endl;
    cin>>n;
    cout<<"Enter the elements "<<endl;
    int *arr=new int[n];            // Dynamically allocating the memory
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];				// xor of same numbers results in zero
    }
    cout<<"The Unique element is "<<ans<<endl;
    delete [] arr;                 // Deleting the memory
    return 0;
}
