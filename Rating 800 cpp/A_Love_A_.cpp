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
    ll c=0,s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a')
        c++;
    }
    if(str.size()%2==0)
    s=str.size()/2;
    else
    s=(str.size()/2)+1;
    if(c>s)
    cout<<str.size()<<endl;
    else
    cout<<((c-1)*2)+1<<endl;


return 0;
}

