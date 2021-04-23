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
    int w=0,b=0;
    char s;
    for(int i=0;i<64;i++)
    {
        cin>>s;
        if(s=='Q')
        w=w+9;
        if(s=='R')
        w=w+5;
        if(s=='B')
        w=w+3;
        if(s=='N')
        w=w+3;
        if(s=='P')
        w=w+1;
        if(s=='q')
        b=b+9;
        if(s=='r')
        b=b+5;
        if(s=='b')
        b=b+3;
        if(s=='n')
        b=b+3;
        if(s=='p')
        b=b+1;  
    }
    if(w>b)
    cout<<"White"<<endl;
    else if(b>w)
    cout<<"Black"<<endl;
    else
    cout<<"Draw"<<endl;


return 0;
}

