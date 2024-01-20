#include<bits/stdc++.h>
using namespace std;
int main(){
// vector<string> input;
int cnt=0;
int t;
cin>> t;
for(int i=0;i<t;i++){
    string temp;
    cin>>temp;
  
    if(temp=="++X"||temp=="X++")
    cnt++;
    else
    cnt--;
   
}
cout<<cnt;

return 0;
}
