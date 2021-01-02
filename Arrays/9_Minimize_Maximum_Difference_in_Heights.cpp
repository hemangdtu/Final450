// Minimise the maximum difference between heights.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin>>N>>K;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	if(N == 1)
		cout<<"0";
	else
	{
		sort(numberArray, numberArray+N);
		int small = numberArray[0] + K;
		int big = numberArray[0] - K;
		if(small>big)
			swap(small, big);
		for(int i = 1; i<N-1; i++)
		{
			int sub = numberArray[i] - K;
			int add = numberArray[i] + K;
			if(sub>=small || add<=big)
				continue;
			else if(big - sub <= add - small)
				small = sub;
			else
				big = add;
		}
		cout<<min((big - small), (numberArray[N-1] - numberArray[0]));
	}
	return 0;
}