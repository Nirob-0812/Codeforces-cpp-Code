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
    bool ok=true;
    ll n,a[13848],sum=0,sum1=0,N,p,j;
    cin>>n;
    getfor(i,n)
    cin>>a[i];
    getfor(i,n)
    {
        if(a[i]%2)
        {
             if(ok)
             {
                 if(a[i]>0)
                 a[i]=a[i]/2;
                 else
                 a[i]=(a[i]/2)-1;
                 ok=false;
             }
             else
             {
                 if(a[i]>0)
                 a[i]=(a[i]/2)+1;
                 else
                 a[i]=(a[i]/2);
                 ok=true;
             }
        }
        else
        a[i]=a[i]/2;
    }
    
    getfor(i,n)
    cout<<a[i]<<nl;
  return 0;
}