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
        ll n,k,a=0,b=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>k;
            v.pb(k);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        getfor(i,n)
        {
            if(i%2==0&&v[i]%2==0)
            a+=v[i];
            else if(i%2&&v[i]%2)
            b+=v[i];
        }
        if(a>b)
        cout<<"Alice"<<endl;
        else if(b>a)
        cout<<"Bob"<<endl;
        else
        cout<<"Tie"<<endl;
    }


return 0;
}

