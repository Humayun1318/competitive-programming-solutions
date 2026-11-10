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

        bool found = false;
        for (int y = 0; y * 7 <= n; y++)
        {
            int remaining = n - (y * 7);

            if (remaining % 2 == 0)
            {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}