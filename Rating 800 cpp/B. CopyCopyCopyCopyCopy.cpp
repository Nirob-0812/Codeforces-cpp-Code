#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
