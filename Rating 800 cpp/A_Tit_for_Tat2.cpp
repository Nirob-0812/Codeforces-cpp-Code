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
        ll n,k,a,c=0;
        cin>>n>>k;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        int i=0;
        while(k--)
        { 
            nirob:
            if(v[i]==0)
            {
                i++;
                if(i==n-1)
                break;
                if(v[i]==0)
                goto nirob;
            }
            if(v[i]>0)
            {
                v[i]--;
                c++;
            }
        }
        v[n-1]=v[n-1]+c;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }


return 0;
}

