#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){

vector<int> row(n, 0);
vector<int> col(m, 0);

for(int i=0;i<n;i++){
    for (int j = 0; j < m; j++)
    {
        if(matrix[i][j] == 0){
            row[i] = 1;
            col[j] = 1;
        }
    }
    
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(row[i] == 1 || col[j] == 1){
            matrix[i][j]=0;
        }
    }
}
return matrix;

}

int main(){

    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}