// Writa a program to find the kth maximum and minimum element of an array.

#include <bits/stdc++.h>
using namespace std;

struct Pair
{
	int kmin;
	int kmax;
};

struct Pair kthminmax(int arr[], int n, int k) 
{
	struct Pair minmax;
	if(n == 1)
	{
		minmax.kmin = minmax.kmax = arr[0];
		return minmax;
	}
	sort(arr, arr + n); 
	minmax.kmin = arr[k-1];
	minmax.kmax = arr[n-k];
	return minmax;
} 

int main() 
{ 
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	int k;
	cin>>k;
	struct Pair P1 = kthminmax(numberArray, N, k); 
	cout<<P1.kmin<<" "<<P1.kmax;
	return 0; 
} 
