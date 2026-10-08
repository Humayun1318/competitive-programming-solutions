#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<long long> h(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int l = 0;
        long long sum = 0;
        int ans = 0;

        for (int r = 0; r < n; r++) {

            // If divisibility condition breaks,
            // current window cannot continue.
            if (r > 0 && h[r - 1] % h[r] != 0) {
                l = r;
                sum = 0;
            }

            sum += a[r];

            // Make sum <= k
            while (sum > k && l <= r) {
                sum -= a[l];
                l++;
            }

            // Current valid window = [l ... r]
            ans = max(ans, r - l + 1);
        }

        cout << ans << '\n';
    }

    return 0;
}