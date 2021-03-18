#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<str.size()-2;i++)
    {
        if(str[i]=='x' && str[i+1]=='x' && str[i+2]=='x')
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
