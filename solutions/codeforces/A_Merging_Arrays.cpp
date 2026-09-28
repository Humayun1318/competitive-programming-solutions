#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m; cin >> n >> m;
    multiset<long long> ms;
    for(int i=0; i<n; i++){
        long long x; cin >> x;
        ms.insert(x);
    }
    for(int i=0; i<m; i++){
        long long x; cin >> x;
        ms.insert(x);
    }
    for(auto v: ms){
        cout << v << " " ;
    }

    return 0;
}