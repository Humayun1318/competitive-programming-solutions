#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    multiset<long long> ms;
    long long l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        ms.insert(v[r]);

        // Jodi max - min > k hoy, tahole l-th element multiset theke remove kore l barabo
        while (*ms.rbegin() - *ms.begin() > k) {
            ms.erase(ms.find(v[l]));
            l++;
        }

        // Ei ending point r-er jonno totogula valid segment ache
        ans += (r - l + 1);
    }

    cout << ans << '\n';
    return 0;
}