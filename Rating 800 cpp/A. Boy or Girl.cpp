#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    set<char> s;
    string str,c;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        s.insert(str[i]);
    }

    if((int)s.size()%2==0)
    {
    cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
}
