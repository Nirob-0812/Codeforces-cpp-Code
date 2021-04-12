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
    int s,v1,v2,t1,t2,m,m1;
    cin>>s>>v1>>v2>>t1>>t2;
    m=(s*v1)+(t1*2);
    m1=(s*v2)+(t2*2);
    if(m==m1)
    cout<<"Friendship"<<endl;
    else if(m<m1)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;

return 0;
}

