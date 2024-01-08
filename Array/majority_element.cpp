#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
	// Write your code here

	int count =0;
	int element=0;

	for(auto num : v){
		if(count == 0 ){
			element = num;
			count ++;
		}
		else if(num != element){
			count --;
		}
		else{
			count++;
		}
	}

	return element;
}

int main() {
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    int majority = majorityElement(v);
    cout << "The majority element is: " << majority << endl;
    return 0;
}