#include<iostream>
using namespace std;
int main()
{
    int n,a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777,};
    cin>>n;
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {
            cout<<"YES"<<endl;
            goto nirob;
            break;
        }

    }
            cout<<"NO"<<endl;
            nirob:
                cout<<"";
    /*int n,temp,rem,c=0,d=0;
    cin>>n;
    if(n%4==0 || n%7==0)
    {
        cout<<"YES"<<endl;
    }
    else if(n%4!=0 || n%7!=0)
    {
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            d++;
            temp=temp/10;
            if(rem==4 || rem==7)
                c++;

        }
        if(d==c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
     */
        return 0;
}
