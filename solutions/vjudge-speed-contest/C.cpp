#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int ones = 0;
        bool hasOne = false;

        for (int i = N - 1; i >= 0; i--) {
            if (S[i] == '1') {
                ones++;
                hasOne = true;
            }
            else if (hasOne && K > 0) {
                ones++;
                K--;
            }
        }

        cout << ones << '\n';
    }

    return 0;
}