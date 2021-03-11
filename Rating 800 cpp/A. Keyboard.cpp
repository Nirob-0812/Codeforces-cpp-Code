#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="qwertyuiop";
    string str1="asdfghjkl;";
    string str2="zxcvbnm,./";
    string str3,str4;
    cin>>str3;
    cin>>str4;
     int i=0,c=0,j=0;                      //R
                                      //s;;upimrrfod;pbr
     while(1)
     {
         if(str4[i]==str[j])
         {
             if(str3[0]=='L')
             {
                 cout<<str[j+1];
                 c++;
                 i++;
                 j=0;
             }
             else
             {
                 cout<<str[j-1];
                 c++;
                 i++;
                 j=0;
             }
         }
         else if(str4[i]==str1[j])
         {
             if(str3[0]=='L')
             {
                 cout<<str1[j+1];
                 c++;
                 i++;
                 j=0;
             }
             else
             {
                 cout<<str1[j-1];
                 c++;
                 i++;
                 j=0;
             }
         }
         else if(str4[i]==str2[j])
         {
             if(str3[0]=='L')
             {
                 cout<<str2[j+1];
                 c++;
                 i++;
                 j=0;
             }
             else
             {
                 cout<<str2[j-1];
                 c++;
                 i++;
                 j=0;
             }
         }
         else
         j++;
         if(c==str4.size())
         {
             cout<<endl;
            break;
         }
     }

}
