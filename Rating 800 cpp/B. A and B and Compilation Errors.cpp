#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    int n,p=0,error,a,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
   for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v1.size();j++)
        {

            if(v[i]==v1[j])
            {
                c++;
                i++;
            }
            else
            {
                error=v[i];
                goto nirob;

            }
        }


    }
    if(c==(v.size()-1))
     {
      cout<<v[v.size()-1];
      goto nirob1;
     }
     nirob:
      cout<<error<<endl;
      nirob1:
          c=0;
   for(int i=0;i<v1.size();i++)
    {
        for(int j=i;j<v2.size();j++)
        {

            if(v1[i]==v2[j])
            {
                c++;
                i++;
            }
            else
            {
                error=v1[i];
                goto nirob2;

            }
        }


    }
     if(c==(v1.size()-1))
     {
      cout<<v1[v1.size()-1];
      return 0;
     }
     nirob2:
      cout<<error<<endl;
      return 0;



}
