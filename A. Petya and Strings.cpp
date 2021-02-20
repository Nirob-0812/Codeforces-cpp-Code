#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int e=0,u=0,d=0;
    string str1,str2;

    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    if(str1==str2)
    {
        cout<<"0"<<endl;
        goto nirob;
    }
    else if(str1>str2)
    {
        cout<<"1"<<endl;
         goto nirob;
    }
    else if(str1<str2)
    {
        cout<<"-1"<<endl;
         goto nirob;
    }
    nirob:
        cout<<"";
        return 0;
}
