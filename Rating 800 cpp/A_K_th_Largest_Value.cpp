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
    bool ok=false;
    ll n,q,a[100005],t,x,c=0;
    cin>>n>>q;
    getfor(i,n)
    {
        cin>>a[i];
        if(a[i]==1)
        c++;
    }
    while(q--)
    {
        cin>>t>>x;
        if(t==1)
        {
            if(a[x-1]==1)
            c--;
            else if(a[x-1]==0)
            c++;
           a[x-1]=1-(a[x-1]);
        }
        else
        {
            if(x<=c)
             cout<<"1"<<nl;
            else
             cout<<"0"<<nl;
        }
    }

  return 0;
}