// Write a program to sort an array consisting of only 0s, 1s and 2s, without using any sorting algorithm.

#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
	int N;
	cin>>N;
	int numberArray[N];
	// Taking input in Array.
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	int c0 = 0;
	int c1 = 0;
	int c2 = 0;
	// Counting occurrence of 0s, 1s and 2s.
	for(int i = 0; i<N; i++)
	{
		if(numberArray[i] == 0)
			c0++;
		if(numberArray[i] == 1)
			c1++;
		if(numberArray[i] == 2)
			c2++;
	}
	// Reinitiallizing values in array in the given order.
	for(int i = 0; i<c0; i++)
		numberArray[i] = 0;
	for(int i = c0; i<c0+c1; i++)
		numberArray[i] = 1;
	for(int i = c0+c1; i<c0+c1+c2; i++)
		numberArray[i] = 2;
	int i = 0;
	//printing the Array.
	while(i<N)
		cout<<numberArray[i++]<<" ";
	return 0;
} 
