#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    if(s<=5)
    {
        goto nirob;
    }
    else
    {
        while(5<s)
        {
            s=s/2-2;
        }
    }
    nirob:
        if(s==1)
            cout<<"Sheldon"<<endl;
        else if(s==2)
            cout<<"Leonard"<<endl;
        else if(s==3)
            cout<<"Penny"<<endl;
        else if(s==4)
            cout<<"Rajesh"<<endl;
        else if(s==5)
            cout<<"Howard"<<endl;
}
