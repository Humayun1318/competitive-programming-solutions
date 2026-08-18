#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{

    if (s.empty())
        return true;

    int l = 0;
    int r = s.size() - 1;

    while (l < r)
    {
        if (!isalnum(s[l]))
        {
            l++;
            continue;
        };
        if (!isalnum(s[r]))
        {
            r--;
            continue;
        }
        if (tolower(s[l]) != tolower(s[r]))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main()
{

    string s = "race a car";
    cout << isPalindrome(s);
    return 0;
}