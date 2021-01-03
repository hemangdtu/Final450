// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum (int *arr, int size)
{
	int maxSum = INT_MIN, newMaxSum = 0; 
    for (int i = 0; i < size; i++) 
    { 
        newMaxSum = newMaxSum + arr[i]; 
        if (maxSum < newMaxSum) 
            maxSum = newMaxSum; 
        if (newMaxSum < 0) 
            newMaxSum = 0; 
    } 
    return maxSum;
}

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	cout<<maxSubArraySum(numberArray, N);
	return 0;
}