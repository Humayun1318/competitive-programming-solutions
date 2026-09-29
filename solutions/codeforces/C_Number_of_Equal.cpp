#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> A(n), B(m);

    for (auto &x : A) cin >> x;
    for (auto &x : B) cin >> x;

    int i = 0, j = 0;
    long long ans = 0;

    while (i < n && j < m) {

        if (A[i] < B[j]) {
            i++;
        }
        else if (A[i] > B[j]) {
            j++;
        }
        else {
            long long value = A[i];

            long long cntA = 0;
            while (i < n && A[i] == value) {
                cntA++;
                i++;
            }

            long long cntB = 0;
            while (j < m && B[j] == value) {
                cntB++;
                j++;
            }

            ans += cntA * cntB;
        }
    }

    cout << ans << '\n';

    return 0;
}