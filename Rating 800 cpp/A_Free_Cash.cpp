#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    vi v;
    ll n,h,m,ans=0,c=0;
    cin>>n;
    getfor(i,n)
    {
        cin>>h>>m;
        v.pb((h*60)+m);
    }
    sort(v.begin(),v.end());
    getfor(i,n-1)
    {
        if(v[i]==v[i+1])
          c++;
        else
          c=0;
        ans=max(ans,c);
    }
    cout<<endl;
    cout<<ans+1<<endl;



return 0;
}

