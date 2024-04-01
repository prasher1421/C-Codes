#include <bits/stdc++.h>


long getSubarraySum(vector<int> arr) {
    int n = arr.size();
    if (n < 4) return 0; 

    long max_diff = 0;
    long left_sum = 0, left_min_sum = 0, right_sum = 0, right_min_sum = 0;

    for (int i = 0; i < n; i++) {
        left_sum += arr[i];
        left_min_sum = min(left_min_sum, left_sum);
        long left_diff = left_sum - left_min_sum;

        right_sum += arr[n - 1 - i];
        right_min_sum = min(right_min_sum, right_sum);
        long right_diff = right_sum - right_min_sum;

        if (i >= 2 && i < n - 1) {
            max_diff = max(max_diff, left_diff - right_diff);
        }
    }

    return max_diff;
}

int main() {
    std::vector<int> arr = {1, 2, 1, -5};

    int maxDiff = getSubarraySum(arr);

    std::cout << "Maximum Difference: " << maxDiff << std::endl;

    return 0;
}
