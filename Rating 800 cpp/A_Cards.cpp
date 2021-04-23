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
    ll n,a,sum=0,avg;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
        sum=sum+a;
    }
    avg=sum/(n/2);
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        i++;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]==0)
            j++;
            if(v[i]+v[j]==avg)
            {
                v1.pb(i+1);
                v1.pb(j+1);
                v[i]=0;
                v[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<n;i=i+2)
    {
        cout<<v1[i]<<" "<<v1[i+1]<<endl;
    }


return 0;
}

