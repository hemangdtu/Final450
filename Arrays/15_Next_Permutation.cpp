// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int *A, int size)
{
    int i,j,small,big,temp;
    for(i=size-1;i>0;i--)
        if(A[i]>A[i-1])
            break;
    if(i==0)
    {
        sort(A,A+size);
        return ;
    }
    small=i-1;
    big=i;
    temp=big;
    for(i=size-1;i>big;i--)
        if(A[i]>A[small] && A[i]<A[temp])
            temp=i;
    int t=A[temp];
    A[temp]=A[small];
    A[small]=t;
    small++;
    sort(A+small,A+size);
}

int main()
{
	int N;
    cin>>N;
    int numberArray[N];
    for (int i = 0; i < N; ++i)
        cin>>numberArray[i];
    int permutation[N];
    nextPermutation(numberArray, N);
    for (int i = 0; i < N; ++i)
        cout<<numberArray[i]<<" ";
	return 0;
}