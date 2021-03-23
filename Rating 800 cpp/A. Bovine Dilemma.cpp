#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        set<int> s;
        int n,a,sub;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sub=abs(v[i]-v[j]);
                s.insert(sub);
            }
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
