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
        vi v;
        ll n,a,r,s,t,k=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
            if(k==0)
            {
            for(int j=0;j<i;j++)
            {
                if(v[j]!=a)
                {
                  r=v[j];
                  s=a;
                  t=i;
                  k=1;
                  break;
                }
            }
            }
        }
        if(v[t]!=v[t+1])
        cout<<t+1<<endl;
        else
         cout<<t<<endl;
         
    }


return 0;
}

