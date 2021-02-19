#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' )
        {
            c++;
        }
    }
    if(c>=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
