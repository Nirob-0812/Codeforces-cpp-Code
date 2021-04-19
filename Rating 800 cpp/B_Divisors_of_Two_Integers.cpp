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
    vi v1;
    ll n,m=0,a;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
        m=max(m,a);
    }
    sort(v.begin(),v.end());
    getfor(i,n-1)
    {
        if(v[i]==v[i+1])
        v1.pb(v[i+1]);
    }
    getfor(i,n)
    {
        if(m%v[i]!=0)
        v1.pb(v[i]);
    }
    sort(v1.begin(),v1.end());
    cout<<v[v.size()-1]<<" "<<v1[v1.size()-1]<<endl;



return 0;
}

