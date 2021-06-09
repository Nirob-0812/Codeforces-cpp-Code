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
       vi v;
       vi v1;
       ll n,a,c=0;
       cin>>n;
       getfor(i,n)
       {
         cin>>a;
         if(a%2)
         v.pb(a);
         else
         v1.pb(a);
       }
       for(int i=0;i<v.size();i++)
       v1.pb(v[i]);
        getfor(i,n)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(v1[i],(2*v1[j]))>1)
                c++;
            }
        }
        cout<<c<<nl;



   }
  return 0;
}