#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n, m; cin >> n >> m;
	    vector<int> v(n);
	    for(int i=0; i<n; i++){
	        cin >> v[i];
	    }
	    sort(v.begin(), v.end());
	    int ans = 0;
	    int sum = 0;
	    for(int i=0; i<n; i++){
	        sum += v[i];
	        int hanshake = (sum*(sum-1)) / 2;
	        if(hanshake <= m){
	            ans++;
	        }
	    }
	    cout << ans << '\n';
	}

}
