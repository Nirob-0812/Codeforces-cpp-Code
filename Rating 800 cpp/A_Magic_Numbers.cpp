#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c=0,p=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='1' )&&(s[i+1]=='4') && (s[i+2]=='4' )&&( i<(s.size()-2)))
        {
            i=i+2;
            c=c+3;
        }
        else if((s[i]=='1') &&(s[i+1]=='4' )&& (i<s.size()-1))
        {
            i++;
            c=c+2;
        }
        else if(s[i]=='1')
        {
            c++;
        }
        else
        {
            p++;
        }
        
    }
    if(p>=1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}