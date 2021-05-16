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
        bool ok=false;
        string str;
        cin>>str;
       for(int i=0;i<str.size()-1;i++)
       {
           if(str[i]=='1'&&str[i+1]=='1')
           for(int j=i+1;j<str.size()-1;j++)
           if(str[j]=='0'&&str[j+1]=='0')
           ok=true;
        }
       if(ok)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
    }


return 0;
}

