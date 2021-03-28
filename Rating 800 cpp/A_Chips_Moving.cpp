#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    int n,a,sub;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==1)
        v1.push_back(a);
    }
    sub=n-v1.size();
    if(sub>v1.size())
    {
       cout<<v1.size()<<endl;
    }
    else
    cout<<sub<<endl;

}
    