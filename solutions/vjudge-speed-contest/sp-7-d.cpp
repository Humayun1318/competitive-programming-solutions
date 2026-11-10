#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> prefix(n);
        prefix[0] = a[0];
        for (long long i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + a[i];
        }
        vector<long long> suffix(n);
        suffix[n - 1] = a[n - 1];
        for (long long i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + a[i];
        }
        vector<long long> ans(n);
        int idx = 0;
        for (long long i = 0; i < n; i++) {
            ans[i] = prefix[i] + suffix[i];
            if (ans[i] < ans[idx]) {
                idx = i;
            }
        }

        cout << idx + 1 << '\n';

    }

    return 0;
}