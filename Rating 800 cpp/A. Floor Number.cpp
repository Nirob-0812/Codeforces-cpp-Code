#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,div;
        cin>>n>>x;
        div=n-2;
        if(n<=2)
        {
            cout<<"1"<<endl;
        }
        else if(div%x==0)
        {
            cout<<(div/x)+1<<endl;
        }
        else
        {
            cout<<(div/x)+2<<endl;
        }

    }

    return 0;
}
