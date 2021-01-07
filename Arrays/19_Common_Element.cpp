// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays..

#include <bits/stdc++.h>
using namespace std;

void commonInThree(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) 
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) 
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            cout<<ar1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j]) 
            i++; 
        else if (ar2[j] < ar3[k]) 
            j++; 
        else
            k++; 
} 

int main()
{
    int N1, N2, N3;
    cin>>N1>>N2>>N3;
    int numberArray1[N1], numberArray2[N2], numberArray3[N3];
    for (int i = 0; i < N1; ++i)
        cin>>numberArray1[i];
    for (int i = 0; i < N2; ++i)
        cin>>numberArray2[i];
    for (int i = 0; i < N3; ++i)
        cin>>numberArray3[i];
    commonInThree(numberArray1, numberArray2, numberArray3, N1, N2, N3);
	return 0;
}