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
    ll n,a,cnt=0;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    getfor(i,n)
    {
        if(v[i]==v[0] || v[i]==v[n-1])
        continue;
        else
        cnt++;
    }
    cout<<cnt<<endl;


return 0;
}

