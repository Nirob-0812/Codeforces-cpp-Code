#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string str;
        cin>>str;
        cout<<str[0];
        for(int i=1;i<str.size();i=i+2)
        {
            cout<<str[i];
        }
        cout<<endl;

    }
}
