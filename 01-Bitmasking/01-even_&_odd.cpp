/*
 * THIS IS THE METHOD TO CALCULATE THE EVEN AND ODD NUMBERS FAST.
 * IN THE BINARY OF THE NUMBER, IF THE NUMBER IS ODD THEN THE LAST BIT IN THE BINARY REPRESENTATION
   WOULD BE SET (i.e. 1) AND IF THE NUMBER IS EVEN THEN THE LAST BIT WOULD NOT BE SET (i.e. 0)
 * BY USING THIS CONCEPT, WE ARE GONNA CALCULATE THE ODD AND EVEN NUMBERS.
 * BY TAKING THE 'AND' WITH THE LAST BIT, WE CAN FIND OUT THAT IF THE NUMBER IS EVEN OR ODD.
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    a=12;
    b=17;
    if (a&1)    // Applying and operator
    {
        cout<<a<<"\t";
        cout<<"Hello odd"<<endl;
    }
    else
    {
        cout<<a<<"\t";
        cout<<"Hello even "<<endl;
    }
    if (b&1)
    {
        cout<<b<<"\t";
        cout<<"Hello odd "<<endl;
    }
    else
    {
        cout<<b<<"\t";
        cout<<"Hello even "<<endl;
    }
    return 0;
}
