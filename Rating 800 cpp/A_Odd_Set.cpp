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
       ll n,a,c=0,c1=0;
       cin>>n;
       for(int i=0;i<2*n;i++)
       {
           cin>>a;
           if(a%2==1)
           c++;
           else
           c1++;
       }
       if(c==c1)
       cout<<"Yes"<<nl;
       else
       cout<<"No"<<nl;
   }
  return 0;
}