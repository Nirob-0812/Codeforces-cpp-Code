#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<char> v;
    int a[100];
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
         if(str[i]!='+')
         {
             v.push_back(str[i]);
         }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<"+";
    }

}
