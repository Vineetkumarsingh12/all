#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertix,edge;
    cin>>vertix>>edge;
    int adj[vertix+1][vertix+1];
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}