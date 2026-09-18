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
        map<int, int> freq;
        int max_freq = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            max_freq = max(max_freq, freq[x]);
        }

        // Jodi shobcheye beshi thaka element-er count baki element-gular theke beshi hoy
        int remaining_elements = n - max_freq;
        if (max_freq > remaining_elements)
        {
            cout << (max_freq - remaining_elements) << "\n";
        }
        else
        {
            // Jodi n even hoy tobe 0, odd hole 1
            cout << (n % 2) << "\n";
        }
    }

    return 0;
}