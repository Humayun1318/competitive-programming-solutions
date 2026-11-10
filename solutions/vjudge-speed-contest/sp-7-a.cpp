#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, na, nb, nc, nd;
        cin >> n;
        cin >> na >> nb >> nc >> nd;

        int ans = na;

        if (nb > ans)
            ans = nb;

        if (nc > ans)
            ans = nc;

        if (nd > ans)
            ans = nd;

        cout << ans << endl;
    }

    return 0;
}