#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> list{
        {1},{4,5,2,3},{1,6},{},{1},{5},{}
    };
    stack<int> q;
    q.push(0);
    vector<int> bfs;
int visited[7]={0};
    while(!q.empty()){
       int vertix=q.top();
       bfs.push_back(vertix);
        q.pop();
        for(auto i:list[vertix])
        {
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<bfs[i]<<" ";
    }
    return 0;
}