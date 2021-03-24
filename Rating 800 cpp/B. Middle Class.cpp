#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        vector<long long int> v;
        long long int i,a,n,x,sub=0,c=0;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            sub=(sub+v[i])-x;
            if(sub>=0)
            {
                c++;
            }
            else
                sub=0;
        }

        cout<<c<<endl;
    }
}

