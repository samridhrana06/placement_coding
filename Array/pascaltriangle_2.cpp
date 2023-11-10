#include<bits/stdc++.h>
using namespace std;
void pascaltriangle(int n){

for(int i=0;i<n;i++)
{
    int number =1; // printing 1 in the begining and end
    for (int j = 0; j <= i; j++)
    {
        cout<<number<<" ";
        number = number * (i-j)/(j+1);

    }
    cout<<endl;
    
}

}
int main(){

int n=5;
pascaltriangle(n);

    return 0;
}