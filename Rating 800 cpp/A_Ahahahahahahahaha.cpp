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
        ll n,a,c=0,c1=0,k,z=0,o=0;
        cin>>n;
        k=n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
            if(a==0)
            z++;
            else
            o++;
        }
        if(z<n/2 && o%2==0 && o>=2)
        {
            cout<<o<<endl;
            for(int i=0;i<o;i++)
            cout<<"1"<<" ";
            cout<<endl;
        }
        else if(z<n/2 && o%2==1)
        {
            if(o>=2)
            {
            cout<<o-1<<endl;
            for(int i=0;i<o-1;i++)
            cout<<"1"<<" ";
            cout<<endl;
            }
        }
        else if(z>=n/2)
        {
            cout<<z<<endl;
            for(int i=0;i<z;i++)
            cout<<"0"<<" ";
            cout<<endl;
        }
        else 
        {
            cout<<"1"<<endl;
            cout<<"0"<<endl;
        }
    }


return 0;
}

