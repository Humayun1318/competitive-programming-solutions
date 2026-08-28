#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {

            int b;
            string moves;

            cin >> b >> moves;

            int up = 0;
            int down = 0;

            for (int j = 0; j < b; j++)
            {
                if (moves[j] == 'U')
                    up++;
                else
                    down++;
            }

            int net = up - down;

            int initial = (ar[i] - net) % 10;

            if (initial < 0)
                initial += 10;

            cout << initial << " ";
        }
        cout << endl;
    }

    return 0;
}