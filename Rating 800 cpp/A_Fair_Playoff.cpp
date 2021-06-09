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
       ll s[4],f,l;
       for(int i=0;i<4;i++)
       cin>>s[i];
       f=max(s[0],s[1]);
       l=max(s[2],s[3]);
       sort(s,s+4);
       if(f>l)
       swap(f,l);
       if(f==s[2]&&l==s[3])
       cout<<"YES"<<nl;
       else
       cout<<"NO"<<nl;

   }
  return 0;
}