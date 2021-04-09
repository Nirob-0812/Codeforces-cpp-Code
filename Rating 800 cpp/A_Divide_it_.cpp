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
        ll n,c=0;
        cin>>n;
        while(1)
        {
            if(n==1)
            break;
            c++;
            if(n%5==0)
            {
                n=(4*n)/5;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
            }
            else if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                cout<<"-1"<<endl;
                goto nirob;
            }
             
        }
        cout<<c<<endl;
        nirob:
        c=0;
    }


return 0;
}

