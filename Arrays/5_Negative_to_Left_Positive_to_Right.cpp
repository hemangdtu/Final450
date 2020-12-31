// Move all negative numbers to beginning and positive to end with constant extra space.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	int j = 0;
    for(int i = 0; i<N; i++)
        if(numberArray[i]<0)
            swap(numberArray[i], numberArray[j++]);
    for(int i = 0; i<N; i++)
    {
        cout<<numberArray[i]<<" ";
    }
	return 0;
}