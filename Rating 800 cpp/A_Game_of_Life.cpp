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
       bool ok;
       ll n,m;
       cin>>n>>m;
       string s1,s2;
       cin>>s1;
       s2=s1;
       while(m)
       {
           ok=true;
           getfor(i,n)
           {
               if(i==0&&s1[i]=='0'&&s1[i+1]=='1')
               s2[i]='1',ok=false;
               else if(i==(n-1)&&s1[i]=='0'&&s1[i-1]=='1')
               s2[i]='1',ok=false;
               else if(i>0&&(n-1)>i)
               if(s1[i]=='0'&&s1[i-1]!=s1[i+1])
               s2[i]='1',ok=false;
           }
           s1=s2;
           m--;
           if(ok)
           break;
       }
       cout<<s1<<nl;
   }
  return 0;
}