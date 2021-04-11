#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<string> vc;
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
    vc v;
    vc v1;
    string str,str1;
    ll n,m,i,q;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>str;
        v.pb(str);
    }
    for(i=0;i<m;i++)
    {
        cin>>str1;
        v1.pb(str1);
    }
    cin>>q;
    while(q--)
    {
        int y,s,t,c,d;
        cin>>y;
        if(y<=n)
        {
            c=y;
        }
        else
        {
            if(y%n==0)
            {
                c=n;
            }
            else
            {
                s=(y/n)*n;
                c=y-s;
            }
        }
        if(y<=m)
        {
            d=y;
        }
        else
        {
            if(y%m==0)
            {
                d=m;
            }
            else
            {
                t=(y/m)*m;
                d=y-t;
            }
        }

        cout<<v[c-1]<<v1[d-1]<<endl;

    }

return 0;
}


