#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int a[3],x1,x2;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());

    x1=v[2]-v[1];
    x2=v[1]-v[0];
    cout<<x1+x2<<endl;



}
