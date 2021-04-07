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
    ll n,k,sum;
    cin>>n>>k;
    while(n--)
    {
        ll f,t;
        cin>>f>>t;
        if(t>k)
        sum=f-(t-k);
        else
        sum=f;
        v.pb(sum);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;


return 0;
}

