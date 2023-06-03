// #include <bits/stdc++.h>

// using namespace std;

// class stds
// {

// public:
//     int roll;
//     int clas;
//     char Blood_group;
//     char name[100];
   

//     stds(int r,int c,char bgr,char*n)
//     {
//         cout<<"My Intuduce : "<<endl;
//         roll=r;
//         clas=c;
//         Blood_group=bgr;
//         strcpy(name,n);
//     }
// };
// stds fun()
// {
//     char name [100]="Md Merazul Islam";
//     stds meraz (20,5,'K',name);
//     return meraz;
// }

// int main()

// {
//     stds meraz =fun();
//      cout << meraz.name<<endl;
//     cout << meraz.roll<<endl;
//     cout << meraz.clas<<endl;
//     cout << meraz.Blood_group<<endl;

//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;
class student
{
    public:
        char name [1000];
        int cls;
        int roll;
        char section;
        student (int r,int c,char s,char *n)
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name ,n);

        }

};
student fun()
{
    char name [100]="Md Meraz Islam";
    student korim(19,4,'b',name);
    return korim;
}

int main()
{
    student korim=fun();
    
    cout<<"Name : "<<korim.name<<endl<<"Roll :"<<korim.roll<<endl<<"Class :"<<korim.cls<<endl<< "Section :"<<korim.section<<endl;
    

    return 0;
}