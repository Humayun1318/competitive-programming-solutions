#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    int sereja = 0;
    int dima = 0;

    bool serejaTurn = true;

    while (l <= r)
    {
        int selected;

        if (a[l] > a[r])
        {
            selected = a[l];
            l++;
        }
        else
        {
            selected = a[r];
            r--;
        }

        if (serejaTurn)
        {
            sereja += selected;
        }
        else
        {
            dima += selected;
        }

        serejaTurn = !serejaTurn;
    }

    cout << sereja << " " << dima << "\n";

    return 0;
}