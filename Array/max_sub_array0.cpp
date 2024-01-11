#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(std::vector<int> arr) {
    int n = arr.size();
    int ans = 0;
    std::unordered_map<int, int> sumMap;  // Map to store cumulative sum

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            ans = i + 1;  // If sum becomes zero, entire array up to index i is a valid subarray
        } else {
            // Check if the sum has been encountered before
            if (sumMap.find(sum) != sumMap.end()) {
                ans = std::max(ans, i - sumMap[sum]);
            } else {
                // Store the current sum along with its index
                sumMap[sum] = i;
            }
        }
    }

    return ans;
}

int main() {
    std::vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int result = LongestSubsetWithZeroSum(arr);
    std::cout << "Length of longest subarray with zero sum: " << result << std::endl;
    return 0;
}
