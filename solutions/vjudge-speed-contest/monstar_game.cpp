
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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        long long swordsNeeded = 0;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            swordsNeeded += b[i];

            if (swordsNeeded > n) {
                break;
            }

            long long difficulty = a[swordsNeeded - 1];
            long long score = difficulty * (i + 1);

            ans = max(ans, score);
        }

        cout << ans << '\n';
    }

    return 0;
}
