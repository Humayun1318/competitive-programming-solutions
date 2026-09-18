#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m; cin >> n >> m; 
    vector<long long> v(n+1), cnt(n+1);

    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    set<int> s;
    for(int i = n; i>=1; i--){
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    for(int i=1; i<=m; i++){
        int x; cin >> x;
        cout << cnt[x] << "\n";
    }

    return 0;
}