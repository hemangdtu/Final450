#include<iostream>
using namespace std;

int main()
{
	int R, C;
	cin >> R >> C;
	int arr[R][C];
	for (int i = 0; i < R; ++i)
		for (int j = 0; j < C; j++)
			cin>>arr[i][j];

	int startR = 0, endR = R-1, startC = 0, endC = C-1;
	while(startR <= endR && startC <= endC)
	{
		for(int i = startR; i<=endC; i++)
			cout<<arr[startR][i]<<" ";
		startR++;
		for(int i = startR; i<=endR; i++)
			cout<<arr[i][endC]<<" ";
		endC--;
		if(endR >= startR)
		{
			for(int i = endC; i>=startC; i--)
				cout<<arr[endR][i]<<" ";
			endR--;
		}
		if(endC >= startC)
		{
			for(int i = endR; i>=startR; i--)
				cout<<arr[i][startC]<<" ";
			startC++;
		}
	}
	return 0;
}