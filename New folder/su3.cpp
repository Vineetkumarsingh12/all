#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    cout<<endl;
    string str=to_string(num);
    if(str[str.size()-1]=='0')
{
    str[str.size()-1]='9';
}
    else if(str[str.size()-1]>'4')
    {
      
    str[str.size()-1]='9'-str[str.size()-1]+'0';
    }
    num=stoi(str);
    cout<<str;

    return 0;
}