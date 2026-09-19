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

        
        vector<int> next(n, n);

        vector<int> last(n + 1, n);

        for (int i = n - 1; i >= 0; i--) {
            next[i] = last[a[i]];
            last[a[i]] = i;
        }

        int ans = 1;

        int left = 0;
        int right = 0;

        while (right < n) {

            int farthest = 0;
            for (int i = left; i <= right; i++) {

                if (next[i] == n) {
                    farthest = n;
                    break;
                }

                farthest = max(farthest, next[i]);
            }


            if (farthest == n) {
                break;
            }

            left = right + 1;
            right = farthest;

            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}