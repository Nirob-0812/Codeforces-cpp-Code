#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[5],sum=0;
    string str;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    v1.push_back(a1);
    v2.push_back(a2);
    v3.push_back(a3);
    v4.push_back(a4);

    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1')
            sum=sum+v1[0];
        if(str[i]=='2')
            sum=sum+v2[0];
        if(str[i]=='3')
            sum=sum+v3[0];
        if(str[i]=='4')
            sum=sum+v4[0];
    }

    cout<<sum<<endl;
    return 0;
}
