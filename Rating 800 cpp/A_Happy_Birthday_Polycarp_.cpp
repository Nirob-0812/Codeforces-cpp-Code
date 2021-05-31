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
       bool ok=true,ok1=true;
       ll n,ans=10,rem,c=0,sum=0;
       cin>>n;
       ans=n;
       while(n!=0)
       {
           rem=n%10;
           n=n/10;
           c++;
       }
       for(int i=0;i<c;i++)
       {
           sum=sum*10+rem;
       }
       if(ans<sum)
       rem=rem-1;
       cout<<(c-1)*9+rem<<endl;
   }
  return 0;
}