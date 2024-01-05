#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    pair<int, int> p;
    unordered_map<int,;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 1; i < n; i++)
    {
        if (mp[i] == 0)
        {
            p.first = i;
        }
        else if (mp[i] == 2)
        {
            p.second = i;
        }
    }

    return p;
}

int main()
{
    vector<int> arr = {1, 2, 2, 4}; // example array
    int n = arr.size();
    pair<int, int> result = missingAndRepeating(arr, n);
    cout << "Missing number: " << result.first << ", Repeating number: " << result.second << endl;
    return 0;
}