/*
This is a program which depict a technique to find out the permutations of a string using bit manipulations.
assume a string 'ABC'
now total number of permutations would be 2<sup>3</sup>-1 (a permutation is an empty string), so now we can calculate it using
the numbers form 1 to 8: 
1= 001  = 'A__'
2= 010  = '_B_'
3= 011  = 'AB_'
4= 100  = '__C'
5= 101  = 'A_C'
6= 110  = '_BC'
7= 111  = 'ABC'
so we just need to take the string character into consideration when the bit is 1.
*/

#include <iostream>
using namespace std;

// Function which performs the permutations using set bits
void permutations(string s)
{
    int total_perm=1<<s.length();     //total_len=16 
    int k=1;                          // Starting which 1 to avoid the null permutation
    while(k<=total_perm)
    {
        int temp=k;
        int x=0;
        while (temp>0)
        {
            if(temp&1)
            {
                cout<<s[x];
            }
            temp=temp>>1;
            x++;
        }
        k++;
        cout<<endl;
    }
}

int main()
{
    string s="ABCD";  // This is a string having 4 length= 4
    permutations(s);
}
