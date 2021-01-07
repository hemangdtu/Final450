// Count pairs with given sum.

#include <bits/stdc++.h>
using namespace std;

int sumPairCount(int arr[], int n, int sum)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
    return count;
}

int main()
{
	int N, sum;
    cin>>N>>sum;
    int numberArray[N];
    for (int i = 0; i < N; ++i)
        cin>>numberArray[i];
    cout<<sumPairCount(numberArray, N, sum);
	return 0;
}