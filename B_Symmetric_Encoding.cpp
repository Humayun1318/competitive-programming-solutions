#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--){
        long long n; cin >> n; 
        string s; cin >> s;

        string r;
        set<char> st;
        for(auto ch: s){
            st.insert(ch);
        }
        for(auto c : st){
            r.push_back(c);
        }
        string ans;

        for(auto c: s){
            int index = r.find(c);
            ans.push_back(r[r.size()-1-index]);
        }
        cout << ans << "\n";

    }

    return 0;
}