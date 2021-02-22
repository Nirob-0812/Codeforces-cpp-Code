#include<iostream>
using namespace std;
int main()
{
    long long int t,n,fst=0,snd=0,trd=0,frth=0,tem,tem1,tem2,tem3,total=0;
    cin>>t;
    while(t--)
    {
        total=0;
        cin>>n;
        if(n>=1000 && n<=10000)
        {
            fst++;
            tem=n/1000;
            n=n%1000;
        }
        if(n>=100 && n<1000)
        {
            snd++;
            tem1=n/100;
            n=n%100;
        }
        if(n>=10 && n<100)
        {
            trd++;
            tem2=n/10;
            n=n%10;
        }
        if(n>=1 && n<10)
        {
            frth++;
            tem3=n;
        }
        total=fst+snd+trd+frth;
        if(total<=4)
        cout<<total<<endl;
        if(fst==1)
        cout<<tem*1000<<" ";
        if(snd==1)
        cout<<tem1*100<<" ";
        if(trd==1)
        cout<<tem2*10<<" ";
        if(frth==1)
        cout<<tem3;
        cout<<endl;
        fst=0,snd=0,trd=0,frth=0,tem=0,tem1=0,tem2=0,tem3=0,total=0;
    }
}
