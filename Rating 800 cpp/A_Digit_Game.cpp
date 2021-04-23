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
        ll n,a,r=0,b=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            a=int(str[i]);
            if(i%2==0)
            if(a%2==1)
            r++;
            if(i%2==1)
            if(a%2==0)
            b++;
        }
        if((n%2 && r>0) || (n%2==0 && b==0))
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;

    }


return 0;
}

