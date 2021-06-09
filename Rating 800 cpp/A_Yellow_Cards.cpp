#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<pair<long long int,long long int>>vplli;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define nl endl
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    ll a1,a2,k1,k2,n,m,s=0;
    cin>>a1>>a2>>k1>>k2>>n;
    m=((k1-1)*a1)+((k2-1)*a2);
    if((n-m)<=0)
    cout<<"0"<<" ";
    else
    cout<<n-m<<" ";
    if(k1>k2)
    {
        swap(k1,k2);
        swap(a1,a2);
    }
    if((a1*k1)<=n)
    {
        s=s+a1;
        n=n-(a1*k1);
    }
    else
    {
        cout<<n/k1<<nl;
        return 0;
    }
    if((a2*k2)<=n)
    {
        s=s+a2;
        cout<<s<<nl;
        return 0;
    }
    else
    {
        cout<<(n/k2)+s<<nl;
    }

  return 0;
}