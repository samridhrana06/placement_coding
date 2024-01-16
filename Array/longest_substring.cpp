#include <bits/stdc++.h> 
using namespace std;

int uniqueSubstrings(string input)
{
    
   unordered_set<char>st;
   int count =0;
   int ans;
    for (auto it : input)
    {

        if(st.find(it) == st.end()){
            st.insert(it);
            count++;
        }
        else{
            st.clear();
            count =0;
        }

    ans = max(ans,count);

    }
    return ans;
}

int main() {
    string input = "abcabcbb";
    int result = uniqueSubstrings(input);
    cout << "Result: " << result << endl;
    return 0;
}