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
        int n,a;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        for(int i=0;i<n-2;i++)
        {
            if(v[i]<v[i+1] && v[i+1]>v[i+2])
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                goto nirob;
            }
        }
        cout<<"NO"<<endl;
        nirob:
        cout<<"";
    }


return 0;
}

