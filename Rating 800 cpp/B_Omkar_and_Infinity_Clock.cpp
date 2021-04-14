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
        vi v1;
        ll n,k,a,b,d=-1000000000,c=-1000000000,m;
        cin>>n>>k;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
            d=max(d,a);
        }
        if(k%2 || k==1)
        {
        getfor(i,n)
        {
            b=d-v[i];
            cout<<b<<" ";
        }
        cout<<endl;
        }
        else
        {
            getfor(i,n)
            {
            b=d-v[i];
            c=max(c,b);
            v1.pb(b);
            }
            getfor(i,n)
            {
             m=c-v1[i];
             cout<<m<<" ";
            }
           cout<<endl;

        }

    }


return 0;
}

