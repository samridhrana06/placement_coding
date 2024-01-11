#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    if (n == 0)
    {
        return 0;
    }

    // int length = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     int x = arr[i];
    //     int count = 1;

    //     while (ls(arr, x + 1) == true)
    //     {
    //         x++;
    //         count++;
    //     }
    //     length = max(length,count);
    // }

    sort(arr.begin(), arr.end());
    int count = 0;
    int lastSmallest = INT_MIN;
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        if (lastSmallest != arr[i])
        {
            count = 1;
            lastSmallest = arr[i];
            longest = 1;
        }

        else if (arr[i] -1 == lastSmallest)
        {
            count++;
            lastSmallest = arr[i];
        }
        else if(arr[i] == lastSmallest){
            continue;
        }
        longest = max(longest,count);
    }
    return longest;
}

int main()
{
    vector<int> arr = {1, 9, 3, 10, 4, 20, 2};
    int result = lengthOfLongestConsecutiveSequence(arr, arr.size());
    cout << "Length of longest consecutive sequence: " << result << endl;
    return 0;
}
