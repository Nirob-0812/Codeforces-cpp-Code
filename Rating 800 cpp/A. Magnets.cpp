#include<iostream>
using namespace std;
int main()
{
    int t,c=1,i,j;

    cin>>t;
    int m[100000];
    for(int i=0;i<t;i++)
    {
        cin>>m[i];
    }
    for(i=0;i<t-1;i++)
    {
            if(m[i]!=m[i+1])
                c++;
    }
    cout<<c<<endl;

}
