//
// Created by soumil on 8/28/2019.
//
/*
 * This is the program to implement the famous classic recursive problem, tower
   of hanoi.
 * This problem is usually solved using recursive approach, to solve it iteratively,
   we need to use the stacks.
 * In this classic problem, there are total number of 3 rods. start, end and an axillary rod.
*/

#include <iostream>
using namespace std;

int steps=0;

// This is the recursive implementation of tower of hanoi
void hanoi(int n, string start, string end, string aux)
{
    if (n==0)   // Base case
    {
        cout<<"No disks!!!"<<endl;
        return;
    }
    if (n==1)   // Base case
    {
        cout<<"Move disk from "<<start<<" to "<<end<<endl;
        steps++;
        return;
    }
    // Recursive cases
    hanoi(n-1,start,aux,end);
    cout<<"Move disk from "<<start<<" to "<<end<<endl;
    steps++;
    hanoi(n-1,aux,end,start);
}

int main()
{
    int n;
    cout<<"Enter the number of disks in the tower of hanoi"<<endl;
    cin>>n;
    hanoi(n,"A","C","B");
    cout<<"Total number of movements done are "<<steps;
    return 0;
}
