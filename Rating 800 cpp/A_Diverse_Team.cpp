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
    int n,k,a,c=0,cnt=1;
    cin>>n>>k;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
        cnt=1;
         for(int j=0;j<i;j++)
        {
            if(v[j]==a)
            {
                cnt=0;
                break;
            }
        }
        if(cnt==1)
        {
            c++;
            v1.pb(i+1);
        }
    }
     

    if(c<k)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
         
    }

return 0;
}

