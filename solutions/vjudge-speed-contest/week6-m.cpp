
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int l = 0;
        int r = n - 1;

        while (l < n && s[l] == 'B') {
            l++;
        }

        while (r >= 0 && s[r] == 'A') {
            r--;
        }

        if (l >= r) {
            cout << 0 << '\n';
        } else {
            cout << r - l << '\n';
        }
    }

    return 0;
}
