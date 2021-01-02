// Minimum number of jumps

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, sumArray = 0;
	cin>>N;
	int numberArray[N+1];
    set<int> s;
	for(int i = 0; i<N+1; i++)
    {
		cin>>numberArray[i];
        s.insert(numberArray[i]);
        sumArray += numberArray[i];
    }
	int sumSet = accumulate(s.begin(), s.end(), 0);
    cout<<sumArray-sumSet;
	return 0;
}