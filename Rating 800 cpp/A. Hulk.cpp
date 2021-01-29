#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t==1)
        cout<<"I hate it"<<endl;
    if(t==2)
        cout<<"I hate that I love it"<<endl;
    if(t==3)
        cout<<"I hate that I love that I hate it"<<endl;
    if(t>=4)
    {
    for(int i=0;i<t-1;i++)
    {
        if(i%2==0)
            cout<<"I hate that ";
        if(i%2==1)
            cout<<"I love that ";
    }
    if(t%2==0)
        cout<<"I love it";
    if(t%2==1)
        cout<<"I hate it";
    cout<<endl;
    }
    return 0;
}
