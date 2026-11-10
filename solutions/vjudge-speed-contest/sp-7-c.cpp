
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int mT, mN, mSum;
        cin >> mT >> mN >> mSum;

        int q = min(mT, mSum / mN);
        int r = mSum - (q * mN);

        long long ans = 1LL * q * mN * mN;

        if (q < mT)
        {
            ans += 1LL * r * r;
        }

        cout << ans << '\n';
    }

    return 0;
}
