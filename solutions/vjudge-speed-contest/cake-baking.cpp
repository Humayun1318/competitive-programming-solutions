#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int extra_cakes = M - N;

    if (extra_cakes > N)
    {
        cout << N << endl;
    }
    else
    {
        cout << extra_cakes << endl;
    }

    return 0;
}