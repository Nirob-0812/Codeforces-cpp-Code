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
    vi v;
    vi v1;
    int n,a,c=1,cnt=1;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    v1.pb(v[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        cnt=1;
        for(int j=0;j<c;j++)
        {
            if(v[i]==v1[j])
            {
                cnt=0;
                break;
            }
        }
        if(cnt==1)
            {
                v1.pb(v[i]);
                c++;
            }
        
    }
    cout<<v1.size()<<endl;
    for(int i=v1.size()-1;i>=0;i--)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.clear();
    v.clear();



return 0;
}

