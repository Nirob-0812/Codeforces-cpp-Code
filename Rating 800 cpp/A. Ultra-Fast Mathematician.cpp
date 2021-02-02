#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string a,b;
    cin>>a>>b;
    for(i=0;i<(a.size());i++)
    {
        if(a[i]==b[i])
            cout<<"0";
        else
            cout<<"1";
    }
}
