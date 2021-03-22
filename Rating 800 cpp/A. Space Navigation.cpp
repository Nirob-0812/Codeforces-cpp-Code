#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string str;
        long long int x,i,y,u=0,d=0,l=0,r=0;
        cin>>x>>y;
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='U')
                u++;
            if(str[i]=='D')
                d++;
            if(str[i]=='R')
                r++;
            if(str[i]=='L')
                l++;
        }
        if(x>=0 && y>=0)
        {
            if(r>=x && u>=y)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(x<=0 && y<=0)
        {
            if(abs(x)<=l && abs(y)<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(x>=0 && y<=0)
        {
            if(r>=x && abs(y)<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(x<=0 && y>=0)
        {
            if(abs(x)<=l && y<=u)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
