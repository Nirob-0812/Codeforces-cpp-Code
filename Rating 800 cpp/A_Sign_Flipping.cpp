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
        ll n,a,c=0,c1=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            if(a<0)
            a=a*(-1);
            v.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            if(i%2)
            v[i]=v[i]*(-1);
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}

