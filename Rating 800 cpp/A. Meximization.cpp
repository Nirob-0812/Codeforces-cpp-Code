#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        set<int>::iterator it;
        vector<int> v;
        vector<int> v1;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            s.insert(a);

        }
        if(n==1)
        {
            cout<<v[0]<<endl;
            goto nirob;
        }
        else{
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
           if(v[i]==v[i+1])
            {
                v1.push_back(v[i+1]);
            }
        }
        for(it=s.begin();it!=s.end();it++)
        {
            cout<<*it<<" ";
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }

        cout<<endl;
        v1.clear();
        v.clear();

        }
        nirob:
            cout<<"";


    }
    return 0;
}
