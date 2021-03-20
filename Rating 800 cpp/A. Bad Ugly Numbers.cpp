#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"-1";
        }
        else
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout<<"2";
            else
            cout<<"3";
        }
        cout<<endl;
    }

    return 0;
}
