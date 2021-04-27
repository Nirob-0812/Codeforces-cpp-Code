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
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<a<<endl;
            continue;
        }
        else if(n%2==0)
        {
            if(a*2>b)
            cout<<(n/2)*b<<endl;
            else
            cout<<n*a<<endl;
        }
        else
        {
            if(a*2>b)
            cout<<((n/2)*b)+a<<endl;
            else
            cout<<n*a<<endl;
        }
    }


return 0;
}