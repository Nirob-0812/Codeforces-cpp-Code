#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,a,c=1,d=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
                c++;
            else
            {
                d=max(d,c);
                c=1;
            }
        }
        cout<<max(d,c)<<endl;
        d=1;
        v.clear();
        c=1;
    }
    return 0;
}
