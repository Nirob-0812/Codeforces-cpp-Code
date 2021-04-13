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
    testcase
    {
         int a,b,c,aa,bb,p,cnt=0;
         cin>>a>>b>>c;
         if(a==1) aa=1;
         if(b==1) bb=1;
         if(a==2) aa=10;
         if(b==2) bb=10;
         if(a==3) aa=100;
         if(b==3) bb=100;
         if(a==4) aa=1000;
         if(b==4) bb=1000;
         if(a==5) aa=10000;
         if(b==5) bb=10000;
         if(a==6) aa=100000;
         if(b==6) bb=100000;
         if(a==7) aa=1000000;
         if(b==7) bb=1000000;
         if(a==8) aa=10000000;
         if(b==8) bb=10000000;
         if(a==9) aa=100000000;
         if(b==9) bb=100000000;
         while(1)
         {
             p=__gcd(aa,bb);
             while(p)
             {
                 p=p/10;
                 cnt++;
             }
             if(cnt==c)
             break;
             else
             {
             cnt=0;
             bb++;
             }

         }
         cout<<aa<<" "<<bb<<endl;

    }


return 0;
}

