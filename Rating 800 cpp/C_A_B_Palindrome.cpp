#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    testcase
    {
        bool ok=false;
        ll a,b,n,z=0,o=0,one=0,zero=0,c,c1,k;
        cin>>a>>b;
        string str;
        cin>>str;
        n=a+b;
        if(n%2)
        k=(n/2);
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            z++;
            if(str[i]=='1')
            o++;
        }
        c=o;
        c1=z;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1'&& str[n-i-1]=='?')
            {
                str[n-i-1]='1';
                c++;
            }
            else if(str[i]=='?'&& str[n-i-1]=='1')
            {
                str[i]='1';
                c++;
            }
            else if(str[i]=='0'&& str[n-i-1]=='?')
            {
                str[n-i-1]='0';
                c1++;
            }
            else if(str[i]=='?'&& str[n-i-1]=='0')
            {
                str[i]='0';
                c1++;
            }
        }
        for(int i=0;i<n/2;i++)
        {
            if(str[i]=='?'&& c1+2<=a)
            {
                str[i]='0';
                str[n-i-1]='0';
                c1=c1+2;
            }
            else if(str[i]=='?'&& c+2<=b)
            {
                str[i]='1';
                str[n-i-1]='1';
                c=c+2;
            }
        }
        if(n%2&&str[k]=='?')
        {
            if(c1<a)
            str[k]='0';
            else
            str[k]='1';
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                ok=true;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            one++;
            else if(str[i]=='0')
            zero++;
        }
        if(zero!=a&&one!=b)
        ok=true;
        if(ok)
        cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            cout<<str[i];
            cout<<endl;
        }
        
    }


return 0;
}

