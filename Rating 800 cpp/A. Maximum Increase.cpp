#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,c=1,Max=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<n;i++)
    {
        if(v[i-1]<v[i])
        {
            c++;
        }
        else
            c=1;
        Max=max(Max,c);
    }
    cout<<Max<<endl;

    return 0;
}
