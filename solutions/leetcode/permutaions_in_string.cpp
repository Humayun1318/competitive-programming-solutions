#include <bits/stdc++.h>
using namespace std;
bool same(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return false;
    }

    return true;
}

bool checkInclusion(string s1, string s2)
{
    if (s1.size() > s2.size())
        return false;
    int freq1[26] = {};
    int freq2[26] = {};

    // s1 frequency
    for (char ch : s1)
    {
        freq1[ch - 'a']++;
    }

    int windowSize = s1.size();

    // প্রথম window count
    for (int i = 0; i < windowSize; i++)
    {
        freq2[s2[i] - 'a']++;
    }

    // প্রথম window check
    if (same(freq1, freq2))
        return true;

    // window slide
    for (int i = windowSize; i < s2.size(); i++)
    {
        // নতুন character ঢুকছে
        freq2[s2[i] - 'a']++;

        // পুরোনো character বের হচ্ছে
        freq2[s2[i - windowSize] - 'a']--;

        if (same(freq1, freq2))
            return true;
    }

    return false;
}

int main()
{
    string s1, s2; cin >> s1 >> s2;
    if(checkInclusion(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}