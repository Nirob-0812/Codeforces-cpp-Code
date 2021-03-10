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
        while(1)
        {
            if(n%2==0)
            {
                if(n%2021==0)
                    n=0;
                else
                    n=n-2020;
            }
            else if(n%2!=0)
            {
                n=n-2021;
            }
            if(n<2020)
                break;
        }
        if(n==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
