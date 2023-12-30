#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
   //brute solution
  //  sort(arr,arr+n); // O(NlogN)

// better solution 

//    int count0 = 0, count1 = 0, count2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             count0++;
//         else if (arr[i] == 1)
//             count1++;
//         else
//             count2++;
//     }

//     for (int i = 0; i < count0; i++)
//         arr[i] = 0;
//     for (int i = count0; i < count0 + count1; i++)
//         arr[i] = 1;
//     for (int i = count0 + count1; i < n; i++)
//         arr[i] = 2;
// }



int low = 0,mid=0,high=n-1;
for(int i=0;i<n;i++){
  if(arr[mid] == 0){
    swap(arr[low],arr[mid]);
    low++;
    mid++;
  }
  else if(arr[mid] == 1){
    mid++;
  } 
  else if (arr[mid] == 2) {
  swap(arr[high], arr[mid]);
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