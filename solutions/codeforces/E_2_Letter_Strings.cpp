#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;

        // a-k => 11 characters
        long long cntFirst[11] = {};
        long long cntSecond[11] = {};
        long long cntPair[11][11] = {};

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            int x = s[0] - 'a';
            int y = s[1] - 'a';

            // Same first, different second
            ans += cntFirst[x] - cntPair[x][y];

            // Same second, different first
            ans += cntSecond[y] - cntPair[x][y];

            // Now store current string
            cntFirst[x]++;
            cntSecond[y]++;
            cntPair[x][y]++;
        }

        cout << ans << '\n';
    }

    return 0;
}