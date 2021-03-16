#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    set<int> s;
    int k,a,sum=0,c=0;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>a;
        v.push_back(a);
        s.insert(a);

    }
    sort(v.begin(),v.end());
    for(int i=11;i>0;i--)
    {
        if(sum<k && v[i]>v[0])
        {
            c++;
            sum=sum+v[i];
        }
    }
    if(sum>=k)
    cout<<c<<endl;
    else if(s.size()==1 && k==v[0])
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;

    return 0;
}
