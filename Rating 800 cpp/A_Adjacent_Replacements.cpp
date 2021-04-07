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
    ll n,a;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        if(a%2)
        v.pb(a);
        else
        v.pb(a-1);
    }
    getfor(i,n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


return 0;
}

