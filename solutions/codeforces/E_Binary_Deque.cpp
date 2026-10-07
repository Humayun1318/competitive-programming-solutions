#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        int total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        // Even after removing nothing, sum is already less than k
        if (total < k) {
            cout << -1 << '\n';
            continue;
        }

        // We need to remove 0 elements
        if (total == k) {
            cout << 0 << '\n';
            continue;
        }

        // Find longest subarray with sum = k
        int l = 0;
        int sum = 0;
        int longest = 0;

        for (int r = 0; r < n; r++) {
            sum += a[r];

            while (sum > k) {
                sum -= a[l];
                l++;
            }

            if (sum == k) {
                longest = max(longest, r - l + 1);
            }
        }

        // Remove everything outside the longest valid subarray
        cout << n - longest << '\n';
    }

    return 0;
}