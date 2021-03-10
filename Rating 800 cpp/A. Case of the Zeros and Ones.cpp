#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a,one=0,zero=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
            one++;
        else if(str[i]=='0')
            zero++;
    }
    int cnt =min(one,zero);
    cout<<n-cnt*2<<endl;

}
