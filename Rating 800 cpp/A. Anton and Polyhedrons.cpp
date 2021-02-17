#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,num,tet=0,cub=0,octa=0,dod=0,ico=0,sum;
    cin>>t;
    string str_anton;
    while(t--)
    {
        cin>>str_anton;
        if(str_anton=="Tetrahedron")
            num=1;
        else if(str_anton=="Cube")
            num=2;
        else if(str_anton=="Octahedron")
            num=3;
        else if(str_anton=="Dodecahedron")
            num=4;
        else if(str_anton=="Icosahedron")
            num=5;
        switch(num)
        {
            case 1:
                {
                    tet++;
                    break;
                }
            case 2:
                {
                    cub++;
                    break;
                }
            case 3:
                {
                    octa++;
                    break;
                }
            case 4:
                {
                    dod++;
                    break;
                }
            case 5:
                {
                    ico++;
                    break;
                }
        }
    }

    sum=tet*4+cub*6+octa*8+dod*12+ico*20;
    cout<<sum<<endl;
}
