#include <bits/stdc++.h>
using namespace std;

struct Pair 
{
    int min;
    int max;
}; 
 
struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;     
    int i;
     
    // If there is only one element 
    // then return it as min and max both
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];     
        return minmax;
    } 
     
    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1]) 
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } 
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    } 
     
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)     
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)     
            minmax.min = arr[i];
    }
    return minmax;
}

int main()
{
	int N;
	cin>>N;
	int numberArray[N];
	for(int i = 0; i<N; i++)
		cin>>numberArray[i];
	Pair P1 = getMinMax(numberArray, N);
	cout<<P1.min<<" "<<P1.max;
	return 0;
}