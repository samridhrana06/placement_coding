#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int>& v) {
    int element1 = 0, element2 = 0, count1 = 0, count2 = 0;
    for (int num : v) {
        if (num == element1) count1++;
        else if (num == element2) count2++;
        else if (count1 == 0) {
            element1 = num;
            count1 = 1;
        }
        else if (count2 == 0) {
            element2 = num;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }
    vector<int> ans;
    int cnt1 = 0, cnt2 = 0;
    for (auto it : v) {
        if (element1 == it) cnt1++;
        if (element2 == it) cnt2++;
    }
    int mini = (int)(v.size() / 3) + 1;
    if (cnt1 >= mini) ans.push_back(element1);
    if (cnt2 >= mini) ans.push_back(element2);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> v = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> result = majorityElementII(v);
    cout << "The elements that appear more than n/3 times are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}