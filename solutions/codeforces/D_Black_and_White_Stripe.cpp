#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    
    int current_whites = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            current_whites++;
        }
    }

    int min_whites = current_whites;

    
    for (int i = k; i < n; i++) {
        
        if (s[i] == 'W') {
            current_whites++;
        }
       
        if (s[i - k] == 'W') {
            current_whites--;
        }
        // Minimum white count track korbo
        min_whites = min(min_whites, current_whites);
    }

    cout << min_whites << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}