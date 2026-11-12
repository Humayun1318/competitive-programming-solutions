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
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;

        if (sum % 3 != 0)
        {
            cout << "NO" << "\n";
            continue;
        }

        int target = sum / 3;
        if (
            (a == target - 1 && b == target && c == target + 1) ||
            (a == target - 1 && c == target && b == target + 1) ||
            (b == target - 1 && a == target && c == target + 1) ||
            (b == target - 1 && c == target && a == target + 1) ||
            (c == target - 1 && a == target && b == target + 1) ||
            (c == target - 1 && b == target && a == target + 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}