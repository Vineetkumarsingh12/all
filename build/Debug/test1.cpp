#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    // cin>>t;
    t=1;
  
    while(t--){
          int flag=1;
        int n;
        // cin>>n;
        n=1
    if(n<7){
    cout<<"NO"<<endl;
    flag=0;
    }
    else{

        n--;
        int temp=2;
        int divisor=1;
        while(!(n-temp<=temp)){
            if((n-temp)%3!=0)
            {
                cout<<"YES"<<endl;
                cout<<"1"<<" "<<temp<<" "<<n-temp<<endl;
                flag=0;
                break;
            }
        temp++;
    if(temp%3==0)
    temp++;

        }

    }
    if(flag)
    cout<<"NO"<<endl;
    }
    return 0;
}