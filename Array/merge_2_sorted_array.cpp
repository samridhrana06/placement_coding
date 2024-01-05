#include<bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
   
    // vector<long long>merge;

    // -------------------- using merge sort technique and using extra space als -----------
    // int sizea = a.size();
    // int sizeb = b.size();

    // int totallength = sizea+sizeb;
    // int i=0,j=0;
    // while (i<sizea and j<sizeb)
    // {
    //     if(a[i] <= b[j]){
    //         merge.push_back(a[i]);
    //         i++;
    //     }
    //     else{
    //         merge.push_back(b[j]);
    //         j++;
    //     }
    // }

    // while (i<sizea)
    // {
    //     merge.push_back(a[i]);
    //     i++;
    // }
    // while (j<sizeb)
    // {
    //     merge.push_back(b[j]);
    //     j++;
    // }
   
    // int mergelength = merge.size();
    
    // for (int k = 0; k < mergelength; k++)
    // {
    //     if(k<sizea){
    //         a[k] = merge[k];
    //     }
    //     else{
    //         b[k-sizea] = merge[k];
    //     }
    // }

// ----------------------------------using compairing and sorting ----------
    int sizea = a.size();
    int sizeb = b.size();
    int i=sizea-1,j=0;
    while (i >= 0 or j<sizeb)
    {
        if(a[i] > b[j]){
            swap(a[i],b[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    

}

int main(){
    vector<long long> arr1 = {1, 4, 8, 10};
    vector<long long> arr2 = {2, 3, 9};
    int n = arr1.size(), m = arr2.size();
    mergeTwoSortedArraysWithoutExtraSpace(arr1, arr2);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}