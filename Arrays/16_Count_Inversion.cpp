#include <bits/stdc++.h>
using namespace std;

// Solution 1: Brute Force
int count_inversions(int A[], int N) {
    int count = 0;
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if(A[i] > A[j]) 
                count++;
        }
    }
    return count;
}

// Solution 2: Divide & Conquer (Merge Sort)
int merge(int A[], int low, int m, int high)
{
    int i = low, j = m+1, k = low;
    int B[1000];
    int total_inversions = 0;
    
    while(i <= m && j <= high) {
        if(A[i] < A[j]) 
            B[k++] = A[i++];
        else {
            B[k++] = A[j++];
            total_inversions += m - i + 1;
        }
    }
    
    while(i <= m) B[k++] = A[i++];
    while(j <= high) B[k++] = A[j++];
    k--;
    
    for(int t=low; t<=high; t++) A[t] = B[t];
    return total_inversions;
}

int count_inversions(int A[], int i, int j) {
    if(i >= j) return 0;
    int m = (i+j)>>1;
    int c1 = count_inversions(A, i, m);
    int c2 = count_inversions(A, m+1, j);
    int c3 = merge(A, i, m, j);
    return c1 + c2 + c3;
}

int main()
{
	int N;
    cin>>N;
    int numberArray[N];
    for (int i = 0; i < N; ++i)
        cin>>numberArray[i];
    cout<<count_inversions(numberArray, 0, N);
	return 0;
}