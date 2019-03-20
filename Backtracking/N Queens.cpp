#include<iostream>
using namespace std;
#define n 8                                             // This is where we define the number of queens

void display(int board[n][n])                           // This is the program to print the board 
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(board[i][j])
			cout<<"Q"<<" ";
			else cout<<"_"<<" ";
		}
		cout<<endl;
	}
}
bool safe(int board[n][n],int row,int col)               // This is the function to find out that if the position for the queen is safe 
{                                                        // or under attack, if the queen is under attack then it return false else true 
	for(int i=0;i<col;i++)
	{
		if (board[row][i])
		return false;
	}
		
	for(int i=row,j=col;i>=0 && j>=0;i--,j--)
	{
		if (board[i][j])
		return false;	
	}
	
	for(int i=row,j=col;i<n && j>=0;i++,j--)
	{
		if (board[i][j])
		return false;
	}
	return true;
}
bool placement(int board[n][n],int col)                 // This function checks all possible placements of the queen, in the nXn chessboard
{                                                       // and calls the 'safe' function to check if the position is safe, if it is safe
	if (col>=n)                                           // then it proceeds on the next column and repeat the process.
	return true;
	
	for (int i=0;i<n;i++)
	{
		if (safe(board,i,col))
		{
			board[i][col]=1;
			if (placement(board,col+1))
				return true;
			board[i][col]=0;
		}
	}
	return false;                                        // If the queen is under the attack, then backtrack
}
int main()
{
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	if(placement(arr,0)==false)
	{
		cout<<"solution do not exist"<<endl;
	}
	else
	{
		cout<<"solution exist"<<endl;
		display(arr);
	}
	return 0;
}
