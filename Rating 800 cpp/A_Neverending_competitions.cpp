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
    int n,c=0;
    string str1,str2,s;
    cin>>n;
    cin>>str1;
    getfor(i,n)
    {
        cin>>str2;
        if(str1[0]==str2[0] && str1[1]==str2[1] && str1[2]==str2[2] ||str1[0]==str2[5] && str1[1]==str2[6] && str1[2]==str2[7])
        {
            c++;
        }
    }
    if(c%2==0)
    cout<<"home"<<endl;
    else
    cout<<"contest"<<endl;

return 0;
}

