#include<iostream>
using namespace std;
int main()
{
    int n,one=0,zero=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='z')
            zero++;
        if(str[i]=='n')
            one++;
    }
    for(int i=0;i<one;i++)
    {
        cout<<"1 ";
    }
    for(int i=0;i<zero;i++)
    {
        cout<<"0 ";
    }

    return 0;

}
