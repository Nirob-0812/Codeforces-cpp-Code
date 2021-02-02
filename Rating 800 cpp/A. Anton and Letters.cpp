#include<iostream>
#include<string>
#include<set>

using namespace std;
int main()
{
    int c=0;
    set<char> s;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        if(isalpha(str[i]))
         s.insert(str[i]);
    }
    cout<<s.size()<<endl;
}
