#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int c=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+2;
            if(c>=1)
                cout<<" ";
        }
         else
         {
             c++;
            cout<<str[i];
         }
    }
}
