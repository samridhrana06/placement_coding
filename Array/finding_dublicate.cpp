#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if((arr[i] ^ arr[i+1]) == 0){
            return arr[i];
        }
    }
    return -1; // return -1 if no duplicate is found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2};
    int n = arr.size();
    int duplicate = findDuplicate(arr, n);
    if(duplicate == -1) {
        cout << "No duplicate found" << endl;
    } else {
        cout << "Duplicate is: " << duplicate << endl;
    }
    return 0;
}