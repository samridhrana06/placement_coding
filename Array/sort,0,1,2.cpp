#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int low=0,mid=0,high = n-1;

    while (mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort012(arr, n);
    cout << "Array after sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}