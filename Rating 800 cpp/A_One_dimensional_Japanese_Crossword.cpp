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
    vi v;
    ll n,c=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
        c++;
        else
        {
            if(c>0)
            v.pb(c);
            c=0; 
        }
    }
    if(c>0)
    v.pb(c);
    if(v.size()>0)
    {
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    }
    else
    cout<<"0"<<endl;


return 0;
}

