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
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    vi v;
    ll n,a,k;
    cin>>n>>k;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    if(v[k-1]==v[k] || (n==1 && v[0]==1))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else if(n==k)
    {
        cout<<v[k-1]<<endl;
    }
    else
    {
        if(v[k]-1==0)
        cout<<"-1"<<endl;
        else
        cout<<v[k]-1<<endl;
    }


return 0;
}

