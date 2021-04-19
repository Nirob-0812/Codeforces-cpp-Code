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
    ll n,a,cnt=0,ans=0,c=0,c1=0,p,res,rest;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            c++;
        }
        else
        c=0;
      if(ans<=c)
      {
          ans=c;
          p=i;
      }
    }
    getfor(i,n)
    {
        if(v[i]==1)
        c1++;
        else
        break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==1)
        c1++;
        else
        break;
    }
    if(p==n-1)
    {
        if(v[0]==1)
        {
            res=ans+1;
        }
        else
        {
            res=ans;
        }
    }
    else
    res=ans;
    rest=max(res,c1);
    cout<<rest<<endl;

return 0;
}

