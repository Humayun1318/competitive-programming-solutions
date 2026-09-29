#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> v1(n), v2(m);

    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }

    int l = 0, r = 0;
    int cnt = 0;
    vector<int> ans;

    while(r < m){
        if(l < n && v1[l] < v2[r]){
            l++;
            cnt++;
        }
        else{
            r++;
            ans.push_back(cnt);
        }
    }

    for(auto v : ans){
        cout << v << " ";
    }

    return 0;
}