#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='.')
            cout<<"0";
        else if(str[i]=='-' && str[i+1]=='.')
        {
            cout<<"1";
            i=i+1;
        }
        else
        {
            cout<<"2";
            i=i+1;
        }
    }
    cout<<endl;
}
