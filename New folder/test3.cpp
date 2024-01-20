#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;

    cin>>n;
    vector<string> inp(n);
    for(int i=0;i<n;i++){
       
        cin>>inp[i];
       
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            string t1=inp[i];
            string t2=inp[j];
            reverse(t1.begin(),t1.end());
             reverse(t2.begin(),t2.end());

            // cout<<inp[i]+inp[j]<<" "<<t2+t1<<endl;
            if(inp[i]+inp[j]==t2+t1)
            {
                cout<<"Yes";
            return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}