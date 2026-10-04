#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int n = s.size();

    vector<int> freq(26, 0);

    int left = 0;
    int distinct = 0;
    int ans = -1;

    for (int right = 0; right < n; right++)
    {

        if (freq[s[right] - 'a'] == 0)
        {
            distinct++;
        }

        freq[s[right] - 'a']++;

        while (distinct > k)
        {
            freq[s[left] - 'a']--;

            if (freq[s[left] - 'a'] == 0)
            {
                distinct--;
            }

            left++;
        }

        if (distinct == k)
        {
            ans = max(ans, right - left + 1);
        }
    }

    cout << ans << '\n';

    return 0;
}