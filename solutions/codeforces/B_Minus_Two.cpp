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
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            int value;

            if (x % 2 != 0)
            {
                value = 1;
            }
            else if (x % 4 == 0)
            {
                value = 0;
            }
            else
            {
                value = 2;
            }

            mp[value]++;
        }

        int ans = 0;

        for (auto p : mp)
        {
            ans = max(ans, p.second);
        }

        cout << ans << "\n";
    }

    return 0;
}