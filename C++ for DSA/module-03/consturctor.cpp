#include <bits/stdc++.h>

using namespace std;

class stds
{

public:
    int roll;
    int clas;
    char Blood_group;
    char name[100];
   

    stds(int r,int c,char bgr,char*n)
    {
        cout<<"My Intuduce : "<<endl;
        roll=r;
        clas=c;
        Blood_group=bgr;
        strcpy(name,n);
    }
};

int main()

{
    stds meraz(10,9,'O',"Md Merazul Islam");
    cout << meraz.name<<endl;
    cout << meraz.roll<<endl;
    cout << meraz.clas<<endl;
    cout << meraz.Blood_group<<endl;
 
    stds shawon(12,9,'H',"MD Shawon ");
    cout << shawon.name<<endl;
    cout << shawon.roll<<endl;
    cout << shawon.clas<<endl;
    cout << shawon.Blood_group<<endl;

    return 0;
}