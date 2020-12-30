#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	cout<<"Entered Array: ";
	for(int i = 0; i<N; i++)
		cout<<numberArray[i];
	for(int i = 0; i<N/2; i++)
		swap(numberArray[i], numberArray[N-i-1]);
	cout<<endl<<"Reversed Array: ";
	for(int i = 0; i<N; i++)
		cout<<numberArray[i];
	return 0;
}