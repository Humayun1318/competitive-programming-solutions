
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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> color, len;

        for (int x : a) {
            if (color.empty() || color.back() != x) {
                color.push_back(x);
                len.push_back(1);
            } else {
                len.back()++;
            }
        }

        int m = color.size();
        int ans = m;

        // Gain 2 if two neighboring runs both have duplicates.
        for (int i = 0; i + 1 < m; i++) {
            if (len[i] >= 2 && len[i + 1] >= 2) {
                ans = m + 2;
                break;
            }
        }

        // Otherwise, check whether we can gain 1.
        if (ans == m) {
            for (int i = 0; i < m; i++) {
                if (len[i] < 2) continue;

                bool canLeft =
                    i >= 1 &&
                    (i < 2 || color[i - 2] != color[i]);

                bool canRight =
                    i + 1 < m &&
                    (i + 2 >= m || color[i + 2] != color[i]);

                if (canLeft || canRight) {
                    ans = m + 1;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
