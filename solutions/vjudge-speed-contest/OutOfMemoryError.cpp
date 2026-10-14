
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> a(n), original(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        original = a;

        for (int i = 0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;

            b--; // 1-based index to 0-based index

            a[b] += c;

            if (a[b] > h) {
                a = original;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
