// Minimum number of jumps

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int N)
{
	if (N == 1)
        return 0;
    int res = INT_MAX;
    for (int i = N - 2; i >= 0; i--)
    	if (i + arr[i] >= N - 1)
        {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
            	res = min(res, sub_res + 1);
        }
    return res;
}

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	cout<<minJumps(numberArray, N);
	return 0;
}