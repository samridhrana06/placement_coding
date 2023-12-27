#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,2,3};

int n = sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);

cout<<"The permuattions are"<<endl;

do
{
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

} while (next_permutation(arr,arr+n));


    return 0;
}