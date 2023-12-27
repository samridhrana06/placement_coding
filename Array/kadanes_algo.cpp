// long long maxSubarraySum(vector<int> arr, int n)
// {
//     long long ans = arr[0];
//     long long sum = 0;

//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
//         if(sum < 0){
//             sum = 0;
//         } else {
//             ans = max(ans, sum);
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }



long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxisum = LONG_MIN;
    long long sum = 0;

    for(int i=0;i<n;i++){

        sum += arr[i];
        
        if(sum > maxisum){
            maxisum=sum;
        }

        if(sum < 0){
            sum =0;
        }
     
    }
    if(maxisum < 0) maxisum =0;

    return maxisum;
}