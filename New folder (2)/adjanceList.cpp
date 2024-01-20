#include<bits/stdc++.h>
using namespace std;
int main()
{
    int edge,vertix;
     cin>>edge>>vertix;
   vector<vector<int>>  list(vertix+1);
   for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    list[u].push_back(v);
    list[v].push_back(u);

   }
   return 0;
}