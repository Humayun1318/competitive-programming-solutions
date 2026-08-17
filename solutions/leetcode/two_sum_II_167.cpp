#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{

    int left = 0;
    int right = numbers.size() - 1;
    while (left < right)
    {
        int sum = numbers[left] + numbers[right];
        if (sum == target)
        {
            return {left + 1, right + 1};
        }
        else if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return {};
}
int main()
{
    vector<int> result = {2, 7, 11, 15};
    result = twoSum(result, 9);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}