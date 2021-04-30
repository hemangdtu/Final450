#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(auto &it : v) cin>>it;
	    int length = 1, ans = 1;
	    sort(v.begin(), v.end());
	    for(int i = 0; i < n-1; i++){
	       if(v[i] != v[i+1]){ 
    	        if(v[i+1] == v[i]+1){
    	           length++;
    	           ans = max(ans, length);
    	        }
    	        else 
    	           length = 1;
	       }
	            
	    }
	    cout<<ans<<endl;
	}
	return 0;
}