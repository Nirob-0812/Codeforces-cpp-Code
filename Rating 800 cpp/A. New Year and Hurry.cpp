#include<iostream>
using namespace std;
int main()
{
    int plm,time,c=0,sum=0;
    cin>>plm>>time;
    for(int i=1;i<=plm;i++)
    {
        sum=sum+i*5;
        if((sum+time)<=240)
        {
            c++;
        }
    }
    cout<<c<<endl;


}
