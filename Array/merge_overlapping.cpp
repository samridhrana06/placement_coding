#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	sort(arr.begin(),arr.end());
	int n = arr.size();
	vector<vector<int>>ans;


	for(int i=0;i<n;i++){
		int start = arr[i][0];
		int end  = arr[i][1];

		if(!ans.empty() and end <= ans.back()[1]){
			continue;
		}

		for(int j=i+1;j<n;j++){

			if(arr[j][0] <= end){
				end = max(end,arr[j][1]);
			}
			else{
				break;
			}
		}

		ans.push_back({start,end});
	}
return ans;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> merged = merge(intervals);
    for(auto interval : merged) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    return 0;
}