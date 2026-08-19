#include <bits/stdc++.h>
using namespace std;

int trapNaive(vector<int> &height)
{
    int result = 0;
    for (int i = 1; i < height.size(); i++)
    {
        int lmx = 0;
        int rmx = 0;
        for (int j = i; j < height.size(); j++)
        {
            if (rmx < height[j])
                rmx = height[j];
        }
        for (int k = i; k >= 0; k--)
        {
            if (lmx < height[k])
                lmx = height[k];
        }
        result += min(lmx, rmx) - height[i];
    }
    return result;
}

// optimize solution
int trap(vector<int> &height)
{
    int result = 0;
    int l = 0;
    int r = height.size() - 1;
    int lmax = 0;
    int rmax = 0;
    while (l < r)
    {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);
        if (lmax < rmax)
        {
            result += lmax - height[l];
            l++;
        }
        else
        {
            result += rmax - height[r];
            r--;
        }
    }
    return result;
}
int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trapNaive(height) << endl;
    cout << trap(height) << endl;

    return 0;
}