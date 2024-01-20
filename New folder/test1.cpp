#include<bits/stdc++.h>
using namespace std;
bool compareSecondFirst(pair<int,pair<int,int>> & a,pair<int,pair<int,int>>& b){
    return a.second.first < b.second.first;
}
int main()
{
    int  n;
    cin>>n;
  vector<pair<int,pair<int,int>>> data(3*n+1);
    for(int i=0;i<3*n;i++){
        int temp;
 cin>>temp;
 data[temp].first=temp;
 
 data[temp].second.second++;
 if(data[temp].second.second==2){
data[temp].second.first=i+1;
 }


    }
    sort(data.begin(),data.end(),compareSecondFirst);
    for(auto i:data){
        if(i.first!=0)
        cout<<i.first<<" ";
    }


    return 0;
}