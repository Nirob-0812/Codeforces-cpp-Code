#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2,adj,str3;
    cin>>str1>>str2;
    adj=str1+str2;
    sort(adj.begin(),adj.end());
    cin>>str3;
    sort(str3.begin(),str3.end());
    if(adj==str3)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
