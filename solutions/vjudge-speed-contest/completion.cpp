#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;
    int prize = 1000 * pow(2, 4 - X);

    cout << prize << endl;

    return 0;
}