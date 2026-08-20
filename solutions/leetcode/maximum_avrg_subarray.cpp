#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    long long maxSum = sum;

    for (int i = k; i < nums.size(); i++) {
        sum += nums[i];
        sum -= nums[i - k];

        maxSum = max(maxSum, sum);
    }

    return (double)maxSum / k;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    double result = findMaxAverage(nums, k);
    cout << "Maximum average: " << result << endl;

    return 0;
}