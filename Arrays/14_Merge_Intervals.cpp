// Kadane's AlgorithmGiven an array of intervals where intervals[i] = [starti, endi],
// merge all overlapping intervals, and return an array of the non-overlapping intervals
// that cover all the intervals in the input.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<int, int>> intervals;
    int n1, n2, N;
    cin>>N;
    for (int i = 0; i < N; ++i)
    {
        cin>>n1>>n2;
        intervals.push_back(make_pair(n1, n2));
    }
    sort(intervals.begin(), intervals.end());
    for (int i = 1; i < intervals.size(); ++i)
    {
        if(intervals[i].first <= intervals[i-1].second)
        {
            n1 = intervals[i-1].first;
            n2 = intervals[i].second;
            intervals.erase(find(intervals.begin(), intervals.end(), intervals[i]));
            intervals.erase(find(intervals.begin(), intervals.end(), intervals[i-1]));
            intervals.push_back(make_pair(n1, n2));
            sort(intervals.begin(), intervals.end());
        }
    }
    for (int i = 0; i < intervals.size(); ++i)
        cout<<"["<<intervals[i].first<<", "<<intervals[i].second<<"], ";
	return 0;
}