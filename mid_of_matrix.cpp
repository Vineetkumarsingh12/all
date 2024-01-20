#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat(3,vector<int>(3,2));
mat[1][1]=6;
    for(int i=0;i<mat.size();i++)
    {
     for(int j=0;j<mat[0].size();j++){
        if(!(i==1 && j==1))
        cout<<i<<j<<" ";
     }
    }

return 0;
}