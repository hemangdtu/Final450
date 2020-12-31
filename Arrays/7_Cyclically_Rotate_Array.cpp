// Cyclically rotate an array by one.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	int temp = numberArray[N-1];
	for (int i = N-1; i > 0; i--)
		numberArray[i] = numberArray[i-1];
	numberArray[0] = temp;
	for (int i = 0; i < N; i++)
		cout<<numberArray[i]<<" ";
	return 0;
}