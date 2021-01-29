#include<iostream>
using namespace std;
int main()
{
    int t,one=0,zero=0,c=0;
    cin>>t;
    int a[100];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==0 || a[i]==1)
        {
        if(a[i]==1)
            one++;
        if(a[i]==0)
            zero++;
        }
    }
    if(one>=1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;

}
