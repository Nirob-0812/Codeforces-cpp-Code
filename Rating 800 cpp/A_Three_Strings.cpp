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
        string str1,str2,str3;
        cin>>str1>>str2>>str3;
        for(int i=0;i<str1.size();i++)
        {
            if(str3[i]!=str1[i])
            swap(str3[i],str1[i]);
            else
            swap(str3[i],str2[i]);
        }
        if(str1==str2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        str1.clear();
        str2.clear();
        str3.clear();
    }


return 0;
}

