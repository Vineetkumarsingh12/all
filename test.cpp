#include<bits/stdc++.h>
using namespace std;

void combination(string s,vector<string> &v,string curr,int k,int index){   
    if(index>k){
        v.push_back(curr);
        return;
    }
 
    combination(s,v,curr+s[index],k,index+1);
    combination(s,v,curr,k,index+1);
}

int main(){

string s="abcd";
int k=3;

vector<string> v;   
combination(s,v,"",k,0);
for(auto x:v)
    cout<<x<<endl;
    return 0;

}