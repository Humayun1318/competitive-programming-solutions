#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    set<string> names;
    while(n--){
        string s; cin >> s;
        if(names.count(s) > 0)
            cout << "YES" << "\n";
        else{
            
            cout << "NO" << "\n";
            names.insert(s);
        }
    }

    return 0;
}