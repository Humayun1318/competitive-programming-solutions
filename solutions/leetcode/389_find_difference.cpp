#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t)
{
    int fr[26] = {0};

    for (char ch : s)
    {
        fr[ch - 'a']++;
    }

    for (char ch : t)
    {
        fr[ch - 'a']--;

        if (fr[ch - 'a'] < 0)
        {
            return ch;
        }
    }

    return '\0';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    char result = findTheDifference(s, t);
    cout << result << endl;

    return 0;
}