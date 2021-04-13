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
    ll x,y,z,a,b,c,cc;
    cin>>x>>y>>z>>a>>b>>c;
    if(a>=x)
    {
        a=a-x;
        if(a+b>=y)
        {
            cc=(a+b)-y;
            if(cc+c>=z)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
            cout<<"NO"<<endl;
            return 0;
            }

        }
        else
        {
        cout<<"NO"<<endl;
        return 0;
        }

    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }



return 0;
}

