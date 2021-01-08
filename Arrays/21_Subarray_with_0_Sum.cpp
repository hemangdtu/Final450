// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

#include <bits/stdc++.h>
using namespace std;

int subArrayExists(int arr[], int n) 
{ 
    unordered_set<int> sum;
    int total = 0;
    for (int i = 0 ; i < n ; i++)
    {
        total += arr[i];
        if (total == 0 || sum.find(total) != sum.end())
            return 1;
        sum.insert(total);
    }
    return 0; 
} 

int main()
{
    int N;
    cin>>N;
    int numberArray[N];
    for (int i = 0; i < N; ++i)
        cin>>numberArray[i];
    if(subArrayExists(numberArray, N))
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}