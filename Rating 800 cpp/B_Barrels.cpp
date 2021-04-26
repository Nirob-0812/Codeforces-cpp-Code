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
        si s;
        ll n,k,a,sum;
        cin>>n>>k;
        getfor(i,n)
        {
            cin>>a;
            s.insert(a);
            v.pb(a);
        }
        if(s.size()==1 && v[0]==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        sort(v.rbegin(),v.rend());
        sum=v[0];
        for(int i=1;i<=k;i++)
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;


    }


return 0;
}

