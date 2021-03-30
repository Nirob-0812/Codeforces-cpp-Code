#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    int n,m,a,b,c,d,sum,cnt_a=0,cnt_b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
        v3.push_back(a);
    }
    cin>>m;
    int k=n;
    int l=m;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        v2.push_back(b);
        v4.push_back(b);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=v1[i]+v2[j];
            for(int p=0;p<k;p++)
            {
                if(sum==v3[p])
                {
                    cnt_a++;
                }
            }
            for(int q=0;q<l;q++)
            {
                if(sum==v4[q])
                {
                    cnt_b++;
                }
            }
            if(cnt_a==0 && cnt_b==0)
            {
                c=v1[i];
                d=v2[j];
                break;
            }
            else
            {
                cnt_a=0;
                cnt_b=0;

            }
        }

    }
    cout<<c<<" "<<d<<endl;


    return 0;


}