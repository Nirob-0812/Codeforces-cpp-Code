#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<char> v;
    int n,w=3,c,b=4,cnt=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            v.push_back(str[i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='O' && v[i+1]=='O')
        {
            cnt=1;
            c=i;
            break;
        }
        else if(i==w)
        {
            w=w+5;
            i++;
        }
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(i==c)
            {
                cout<<"++";
                i++;
            }
            else
            {
                cout<<v[i];
            }
            if(i==b)
            {
                b=b+5;
                cout<<endl;
            }
        }

    }
    else
        cout<<"NO"<<endl;

     return 0;

}
