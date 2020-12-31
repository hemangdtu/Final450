// Find Union and Intersection of two unsorted arrays.

#include <bits/stdc++.h>
using namespace std;

void arrayUnion(int *arr1, int *arr2, int size1, int size2)
{
	set<int> s;
	for(int i = 0; i<size1; i++)
		s.insert(arr1[i]);
	for(int i = 0; i<size2; i++)
		s.insert(arr2[i]);
	for(auto i = s.begin(); i!=s.end(); i++)
		cout<<*i<<" ";
	cout<<endl;
}

void arrayIntersection(int *arr1, int *arr2, int size1, int size2)
{
	int i = 0, j = 0;
	set<int> s;
	while(i<size1 || j<size2)
	{
		if(arr1[i]>arr2[j])
			j++;
		else if(arr1[i]<arr2[j])
			i++;
		else
		{
			s.insert(arr1[i]);
			i++;
			j++;
		}
	}
	for(auto i = s.begin(); i!=s.end(); i++)
		cout<<*i<<" ";
	cout<<endl;
}

int main()
{
	int N1, N2;
	cin>>N1>>N2;
	int numberArray1[N1], numberArray2[N2];
	for(int i = 0; i<N1; i++)
		cin>>numberArray1[i];
	for(int i = 0; i<N2; i++)
		cin>>numberArray2[i];
	arrayUnion(numberArray1, numberArray2, N1, N2);
	arrayIntersection(numberArray1, numberArray2, N1, N2);
	return 0;
}