#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int p,a,i=1,b,c,t_a,t_b,t_c,total_time;
        long long int cnt_a=0,cnt_b=0,cnt_c=0;
        cin>>p>>a>>b>>c;
        if(p%a==0)
            t_a=0;
        else
            t_a=a-(p%a);
        if(p%b==0)
            t_b=0;
        else
            t_b=b-(p%b);
        if(p%c==0)
            t_c=0;
        else
            t_c=c-(p%c);
        total_time= min(min(t_a,t_b),t_c);
        cout<<total_time<<endl;


    }

    return 0;
}
