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
        int n,a,u=0,d=0,c=0;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        if(a==2)
        {
            c=1;
        }
        if(a==3 && c==1)
        {
            c=0;
        }
        if(a==1)
        {
            u++;
        }
        if(a==3)
        {
            u++;
        }

    }
    cout<<u<<endl;

    }

return 0;
}

