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
        ll n,a,b,c;
        cin>>n;
        if(n<3 || n==4)
        {
            cout<<"-1"<<endl;
            continue;
        }
        a=n/3;
        b=3*a;
        c=n-b;
        if(c==0)
            cout<<a<<" 0"<<" 0"<<endl;
        else if(c==1)
            cout<<a-2<<" "<<"0 "<<"1"<<endl;
        else if(c==2)
            cout<<a-1<<" "<<"1 "<<"0"<<endl;
    }


return 0;
}

