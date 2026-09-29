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
        int N;
        cin >> N;
        if (N == 1)
        {
            cout << 1 << '\n';
        }
        else if (N % 2 == 1)
        {
            cout << (N - 1) / 2 << '\n';
        }
        else
        {
            cout << N / 2 + 1 << '\n';
        }
    }

    return 0;
}