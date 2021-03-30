#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase long long int t; cin>>t; while(t--)
#define getfor int i; for(i=0;i<n;i++) 
#define sort_array sort(v.begin(),v.end()); 

int main()
{
    testcase
    {
        long long int n,p,sum=0,rem,res;
        cin>>n;
        while(1)
        {
            p=n;
            while(p!=0)
            {
                rem=p%10;
                sum=sum+rem;
                p=p/10;
            }
            res=__gcd(sum,n);
            if(res>1)
             break;
            else
            n++;
            rem=0;
            sum=0;
        }

        cout<<n<<endl;

    }
    return 0;
    
}