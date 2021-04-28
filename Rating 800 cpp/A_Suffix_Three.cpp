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
        cin>>str;
        int l=str.size();
        if(str[l-1]=='o'&&str[l-2]=='p')
        cout<<"FILIPINO"<<endl;
        else if(str[l-1]=='u'&&str[l-2]=='s'&&str[l-3]=='e'&&str[l-4]=='d')
        cout<<"JAPANESE"<<endl;
        else if(str[l-1]=='u'&&str[l-2]=='s'&&str[l-3]=='a'&&str[l-4]=='m')
        cout<<"JAPANESE"<<endl;
        else if(str[l-1]=='a'&&str[l-2]=='d'&&str[l-3]=='i'&&str[l-4]=='n'&&str[l-5]=='m')
        cout<<"KOREAN"<<endl;

    }


return 0;
}

