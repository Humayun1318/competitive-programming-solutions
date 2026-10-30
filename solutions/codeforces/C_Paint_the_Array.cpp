#include <bits/stdc++.h>
using namespace std;
#include <numeric>

using ll = long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll g1 = 0, g2 = 0;

        // GCD of even-indexed elements
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, a[i]);
        }

        // GCD of odd-indexed elements
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, a[i]);
        }

        bool valid1 = true;
        bool valid2 = true;

        // Check whether g1 divides any odd-indexed element
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                valid1 = false;
                break;
            }
        }

        // Check whether g2 divides any even-indexed element
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % g2 == 0)
            {
                valid2 = false;
                break;
            }
        }

        if (valid1)
        {
            cout << g1 << '\n';
        }
        else if (valid2)
        {
            cout << g2 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}
