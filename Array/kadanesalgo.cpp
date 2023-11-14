#include <bits/stdc++.h>
using namespace std;

// brute force
int kadanealgo(vector<int> arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

// better solution
int kadanealgo(vector<int> arr, int n)
{

    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum < 0)
        {
            sum = 0;
        }

        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = kadanealgo(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
