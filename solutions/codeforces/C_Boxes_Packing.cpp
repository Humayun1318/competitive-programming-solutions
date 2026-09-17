#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    vector<long long> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int, int> fre;

    for(auto v: v){
        fre[v]++;
    }
    int ans = INT_MIN;
    for(auto v: fre){
        ans = max(ans, v.second);
    }
    cout << ans << "\n";

    return 0;
}