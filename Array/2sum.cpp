#include<bits/stdc++.h>
using namespace std;


string read(int n, vector<int> book, int target) {
  // Write your code here.
  string ans = "NO";
  int substract = 0;
  substract = target - book[0];

  for (int i = 1; i < n-1; i++) {
    if (substract == 0) {
      ans = "YES";
      break;
    }
    else if (substract > 0 ){
        substract -= book[i];
    }
    
    else if (substract < 0) {
      substract = 0;
      i++;
    }
  }
  return ans;
}

int main() {
    vector<int> book = {2, 7, 11, 15};
    int target = 9;
    string result = read(book.size(), book, target);
    cout << "Result: " << result << endl;
    return 0;
}