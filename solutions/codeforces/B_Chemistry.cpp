#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int frq[26] = {0};
        for (auto c : s)
        {
            frq[c - 'a']++;
        }

        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (frq[i] % 2 != 0)
                odd++;
        }

        if (odd <= k + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}