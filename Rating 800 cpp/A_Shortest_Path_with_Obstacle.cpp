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
       ll a1,a2,b1,b2,f1,f2,a11;
       cin>>a1>>a2>>b1>>b2>>f1>>f2;
       a11=abs(a1-b1)+abs(a2-b2);
       if(f1==a1&&f1==b1&&(f2<max(a2,b2)&&f2>min(a2,b2)))
       cout<<a11+2<<nl;
       else if(f2==a2&&f2==b2&&(f1<max(a1,b1)&&f1>min(a1,b1)))
       cout<<a11+2<<nl;
       else
       cout<<a11<<nl;
   }
  return 0;
}