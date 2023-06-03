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



// #include <bits/stdc++.h>

// using namespace std;
// class student //student is object
// {
//     public:  // er under e amra ki ki information chai ta dite hobe 
//         char name [1000];
//         int cls;
//         int roll;
//         char section;
//         student (int r,int c,char s,char *n)
//         {
//             roll=r;
//             cls=c;
//             section=s;
//             strcpy(name ,n);

//         }

// };

// int main()
// {
//     char name [100]="Md Meraz Islam";
//     student* korim=new student(672581,12,'A',name);


//    //output er jonno deraferance korte hobe  
    
//     // cout<<"Name : "<<  (*korim).name<<endl<<"Roll :"<<(*korim).roll<<endl<<"Class :"<<(*korim).cls<<endl<< "Section :"<<(*korim).section<<endl;
    
// // --------> shortcut 


//     cout<<"Name :"<<korim->name<<endl;
//     cout<<"Roll :"<<korim->roll<<endl;
//     cout<<"Class :"<<korim->cls<<endl;
//     cout<<"Section :"<<korim->section<<endl;


//     delete korim;


//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
class student{
    public:
        char name [100];
        int roll;
        int cls ;
        int group;
        student (int r,int c,char gp,char *n )
        {
            roll = r;
            cls =c;
            group=gp;
            strcpy(name ,n);
        }
    
};

int main()
{
    char name[100]="Md Merazul Islam" ;
    student* meraz = new student(672581,12,'A',name );
    (*meraz).roll=50;

    cout<<meraz->name<<endl;
    cout<<meraz->roll<<endl;
    cout<<meraz->cls<<endl;
    cout<<meraz->group<<endl;

    delete meraz;
   
    return 0;
}