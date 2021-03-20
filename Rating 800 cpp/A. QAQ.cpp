#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<char> v;
    string str;
    int c=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='Q' || str[i]=='A')
            v.push_back(str[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for( int k=j+1;k<v.size();k++)
            {
                if(v[i]=='Q' && v[j]=='A' && v[k]=='Q')
                {
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
}
