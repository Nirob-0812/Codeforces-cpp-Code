#include<iostream>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
            c++;
    }
    if(c>=1)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
