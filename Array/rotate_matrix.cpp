#include<bits/stdc++.h>
using namespace std;

// Function to rotate a matrix 90 degrees clockwise
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Define the boundaries of the matrix
    int top = 0;
    int left = 0;
    int right = m-1;
    int bottom = n-1;

    int cur=0;

    // Loop through the matrix, starting from the outer layer and moving towards the inner layers
    while(top<bottom && left<right){
        // Store the first element of the next layer, this element will replace the first element of the current layer
        int prev = mat[top+1][left];

        // Rotate the top row
        for(int i=left;i<=right;i++){
            cur = mat[top][i];
            mat[top][i] = prev;
            prev=cur; 
        }
        top++;

        // Rotate the right column
        for(int i=top;i<=bottom;i++){
            cur = mat[i][right];
            mat[i][right] = prev;
            prev=cur;
        }
        right--;

        // Rotate the bottom row if it hasn't been rotated yet
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cur = mat[bottom][i];
                mat[bottom][i] = prev;
                prev=cur;
            }
            bottom--;
        }

        // Rotate the left column if it hasn't been rotated yet
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cur = mat[i][left];
                mat[i][left] = prev;
                prev=cur;
            }
            left++;
        }
    }
}

int main() {
    // Define the matrix
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = mat.size();
    int m = mat[0].size();

    // Print the original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    // Rotate the matrix
    rotateMatrix(mat, n, m);

    // Print the rotated matrix
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}