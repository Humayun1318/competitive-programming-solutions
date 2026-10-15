
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<int> b(k);

        // Calculate the initial sum of the array a
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ans += a[i];
        }

        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }

        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());

        int pos = 0;

        for (int i = 0; i < k; i++) {
            if (pos + b[i] > n) {
                break;
            }

            pos += b[i] - 1;
            ans -= a[pos];
            pos++;
        }

        cout << ans << '\n';
    }

    return 0;
}
