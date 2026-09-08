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
        int a, b;
        cin >> a >> b;

        if (100 * b > 225 * a)
        {
            cout << "Small" << endl;
        }
        else if (225 * a > 100 * b)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}