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
   testcase
   {
       bool  ok=true;
       ll n,a[55],f,l,c=0;
       cin>>n;
       getfor(i,n)
       {
           cin>>a[i];
           if(ok&&a[i]==1)
           {
               f=i;
               ok=false;
           }
       }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                l=i;
                break;
            }
        }
        if(f==l)
        {
            cout<<"0"<<nl;
            continue;
        }
        for(int i=f;i<=l;i++)
            if(a[i]==0)
            c++;
        cout<<c<<nl;
   }
  return 0;
}