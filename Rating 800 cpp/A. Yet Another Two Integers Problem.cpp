#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,dif,sum;
        double div;
        cin>>a>>b;
        if(a==b)
            cout<<"0"<<endl;
        else if(a<b)
        {
            dif=b-a;
            sum=dif/10;
            div=(double)dif/10;
            if(div>sum)
                cout<<sum+1<<endl;
            else
                cout<<sum<<endl;
        }
        else if(a>b)
        {
            dif=a-b;
            sum=dif/10;
            div=(double)dif/10;
            if(div>sum)
                cout<<sum+1<<endl;
            else
                cout<<sum<<endl;
        }
    }
}
