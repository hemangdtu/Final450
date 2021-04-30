//Rearrange array in alternating positive & negative items with O(1) extra space

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int >v(n);
	for(auto &it : v) cin>>it;
	int k = n-1, j = 0;
	while(j < k)
	{
		while(j < n && v[j] > 0 )
			j++;
		while(k >j && v[j] < 0)
			k--;
		if(j < k)
		    swap(v[j], v[k]);
	}
        if(j == n-1){
		for(auto i : v)
			cout<<i<<" ";
	}
	else{
		int x = 0; 
		while(j < n && x<n)
		{
			swap(v[x], v[j]);
			j+=1;
			x+=2;
		}
		for(auto i : v)
			cout<<i<<" ";
	}
	return 0;
}