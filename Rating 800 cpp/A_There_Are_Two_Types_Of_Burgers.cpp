#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int b,p,f,h,c,sum=0,mul=0,mul1=0,div,sub;
        cin>>b>>p>>f;
        cin>>h>>c;
        if(h<c)
        {
            if(f*2<=b)
            {
                mul=f*c;
                sub=b-(f*2);

            }
            else
            {
                div=b/2;
                mul=div*c;
                sub=b-div*2;
            }
            if(sub>=2)
            {
              if(p*2<=sub)
              {
                mul1=p*h;
                sub=b-(p*2);

              }
               else
               {
                div=sub/2;
                mul1=div*h;
               }

            }

        }
        else
        {
            if(p*2<=b)
            {
                mul=p*h;
                sub=b-(p*2);

            }
            else
            {
                div=b/2;
                mul=div*h;
                sub=b-div*2;
            }
            if(sub>=2)
            {
              if(f*2<=sub)
              {
                mul1=f*c;
                sub=b-(f*2);

              }
               else
               {
                div=sub/2;
                mul1=div*c;
               }

            }

        }
        cout<<mul+mul1<<endl;
        mul=0;
        mul1=0;
        sub=0;
        div=0;


    }
    
}