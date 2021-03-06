#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int c=0;
    vector<char> v;
    vector<char> v1;
    string str,str1,str2,str3,str4,str5;
    cin>>str;
    v.push_back(str[0]);
    v.push_back(str[1]);
    cin>>str1;
    v1.push_back(str1[0]);
    v1.push_back(str1[1]);
    cin>>str2;
    v1.push_back(str2[0]);
    v1.push_back(str2[1]);
    cin>>str3;
    v1.push_back(str3[0]);
    v1.push_back(str3[1]);
    cin>>str4;
    v1.push_back(str4[0]);
    v1.push_back(str4[1]);
    cin>>str5;
    v1.push_back(str5[0]);
    v1.push_back(str5[1]);


    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==v[0] || v1[i]==v[1])
        {
            c++;
        }
    }
    if(c>=1)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
