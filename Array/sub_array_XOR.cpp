#include <bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector<int>& a, int b) {
    int xr = 0;
    int count = 0;
    map<int, int> mp;
    mp[xr]++;

    for (int i = 0; i < a.size(); i++) {
        xr = xr ^ a[i];

        int x = xr ^ b;
        count += mp[x];
        mp[xr]++;
    }

    // Return the count of subarrays with sum equal to b
    return count;
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 7;

    int result = subarraysWithSumK(arr, targetSum);

    cout << "Number of subarrays with sum " << targetSum << ": " << result << endl;

    return 0;
}
