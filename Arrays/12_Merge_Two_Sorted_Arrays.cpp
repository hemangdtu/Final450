// Merge two sorted arrays without using extra space

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;
	int numberArray1[N], numberArray2[M];
	for(int i = 0; i<N; i++)
    	cin>>numberArray1[i];
    for(int i = 0; i<M; i++)
    	cin>>numberArray2[i];
    int i = 0, j = 0;
    for(; i<N && j<M; i++)
    {
    	if(numberArray1[i]>=numberArray2[j])
    	{
	    	swap(numberArray1[i], numberArray2[j]);
	    	sort(numberArray2, numberArray2+M);
    	}
    }
    sort(numberArray1, numberArray1+N);
    sort(numberArray2, numberArray2+M);
    for(int i = 0; i<N; i++)
    	cout<<numberArray1[i]<<" ";
    for(int i = 0; i<M; i++)
    	cout<<numberArray2[i]<<" ";
    return 0;
}