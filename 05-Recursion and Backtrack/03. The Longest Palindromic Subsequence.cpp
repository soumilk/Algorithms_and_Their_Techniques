/*
This is the recursive program in which we need to find out the longest palindromic subsequence in the given string,
this solution is here done with the help of recursion, although this is question is better solved with the help of the 
Bottom up dynamic programming, because the complexity of this algorithm in recursive manner is O(2^n).
*/

#include<iostream>
using namespace std;

int lps(string s, int i,int j)
{
    // Base case 
    if (i==j)
    {
        return 1;
    }
    if (s[i]==s[j] && i+1==j)
    {
        return 2;
    }
    
    // Recursive cases 
    if (s[i]==s[j])
    {
        return 2+lps(s,i+1,j-1);
    }
    return max(lps(s,i+1,j),lps(s,i,j-1));
}

int main()
{
    string s;
    cin>>s;
    int ans=lps(s,0,s.length()-1);
    cout<<ans<<endl;
    return 0;
}
