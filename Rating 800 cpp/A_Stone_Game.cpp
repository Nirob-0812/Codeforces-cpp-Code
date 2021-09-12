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
       ll n,a[105],m,l,p1,p2,ans;
       cin>>n;
       getfor(i,n)
       {
           cin>>a[i];
       }
       m=*min_element(a,a+n);
       l=*max_element(a,a+n);
       getfor(i,n)
       {
           if(a[i]==m)
           {
               p1=i+1;
               break;
           }
       }
       getfor(i,n)
       {
           if(a[i]==l)
           {
               p2=i+1;
               break;
           }
       }
       if(p1>p2)
       swap(p1,p2);
       ans=min(p2,p1+n-p2+1);
       cout<<min(ans,n-p1+1)<<nl;




   }
  return 0;
}