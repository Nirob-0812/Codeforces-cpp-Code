#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        vector<int> v1;
        int n,m,a,b,res,c=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b;
            v1.push_back(b);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i]==v1[j])
                {
                    c++;
                    res=v[i];
                    goto nirob;
                }
            }
        }
        nirob:
        if(c==1)
        {
           cout<<"YES"<<endl;
           cout<<"1 "<<res<<endl;
        }
        else
            cout<<"NO"<<endl;
            res=0;
            v.clear();
            v1.clear();
    }
}
