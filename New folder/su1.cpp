#include<bits/stdc++.h>
using namespace std;
int main(){
    // taking input
    int t;
    cout<<"enter the number of test case"<<endl;
 cin>>t;

    for(int i=0;i<t;i++){
          string test;
          cout<<"Enter the string"<<endl;
    cin>>test;
    if(test[test.length()-1]=='Q')
    {
    cout<<"False"<<endl;
    continue;
    }
    int cntQ=0;
    //
    for(auto i:test){
     if(i=='Q')
cntQ++;
else
cntQ--;

    }
    if(cntQ<=0)
cout<<"YES"<<endl;
else
cout<<"False"<<endl;

    }
    return 0;
}