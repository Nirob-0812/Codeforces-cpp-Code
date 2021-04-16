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
        string str;
        ll n,c0,c1,h,zero=0,one=0;
        cin>>n>>c0>>c1>>h;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            zero++;
            else
            one++;
        }
        if(c0<c1 && c0+h<c1)
        {
            cout<<(c0*zero)+(c0*one)+(h*one)<<endl;
            continue;
        }
        else if(c0>c1 && c1+h<c0)
        {
            cout<<(c1*one)+(c1*zero)+(h*zero)<<endl;
            continue;
        }
        else 
        {
            cout<<zero*c0+one*c1<<endl;
            continue;
        }
         
    }


return 0;
}

