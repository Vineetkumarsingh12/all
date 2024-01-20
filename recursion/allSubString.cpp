#include<bits/stdc++.h>
using namespace std;
void sub(vector<string> &ans,string s,int start,int size,string temp){
    if(start==s.size())
    {  cout<<temp<<endl;
        ans.push_back(temp);
        return ;
    } 
// not pick
sub(ans,s,start+1,size,temp);
sub(ans,s,start+1,size,temp+s[start]);

//  pick
}

int main(){
    string s="ab";
    vector<string> ans;
    cout<<"*"<<endl;
    sub(ans,s,0,s.size(),"");
    // for(auto i:ans)
    // cout<<s<<" ";
    return 0;
}