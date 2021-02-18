#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int r;
    string str;
    vector<string> s;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            goto nirob;
        }
        cout<<".";
        cout<<str[i];
        nirob:
        cout<<"";

    }

}
