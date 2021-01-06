// Say you have an array for which the ith element is the price of a given stock on day i.
// If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock),
// design an algorithm to find the maximum profit.
// Note that you cannot sell a stock before you buy one.

#include <bits/stdc++.h>
using namespace std;

int maxProfit(int *arr, int size)
{
    int i, m = 0, n1 = INT_MAX;
    int ans = 0;
    for (int i = 0; i < size; ++i)
    {
        n1 = min(n1, arr[i]);
        ans = max(arr[i]-n1, ans);
    }
    return ans;
}

int main()
{
	int N;
    cin>>N;
    int numberArray[N];
    for (int i = 0; i < N; ++i)
        cin>>numberArray[i];
    cout<<maxProfit(numberArray, N);
	return 0;
}