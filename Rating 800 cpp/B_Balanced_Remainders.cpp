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
        ll n,a,c0=0,c1=0,c2=0,ans=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            if(a%3==0)
            c0++;
            if(a%3==1)
            c1++;
            if(a%3==2)
            c2++;
        }
        while(true)
        {
            if(c0==c1 && c1==c2)
            break;
            if(c0>n/3)
            {
                ans=ans+(c0-(n/3));
                c1=c1+(c0-(n/3));
                c0=n/3;
            }
            if(c1>n/3)
            {
                ans=ans+(c1-(n/3));
                c2=c2+(c1-(n/3));
                c1=n/3;
            }
            if(c2>n/3)
            {
                ans=ans+(c2-(n/3));
                c0=c0+(c2-(n/3));
                c2=n/3;
            }
        }

        cout<<ans<<endl;
    }


return 0;
}

