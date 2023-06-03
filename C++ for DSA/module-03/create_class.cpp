// #include <bits/stdc++.h>
// using namespace std;

// //1. class er maje akta nam diya kiser in nite chao ta .
// //2. public:
// //3. information
// //4. main fun er vitore kaj-->
// //      je kono akta nirdistho kore nite hobe jemon (students korim ;)
// //5. er por data type e value gula dite paren
// //6.
// //       note : name er jonno direct kono string input deya jabe na
// //              char nam[100]="Mr. XZ";
//                /* strcpy(s.name,nam);
//                     eikhane noton arekta string toiri kore tarpor oi string take main funtion er vaire je arekta funtion oitar name er jaygay (strpy----build in funtion use kore pathano hoyeche )*/

// class students
// {
//     public:
//         char name[100];
//         int roll;
//         int cls;
//         char grp;

// };

// int main()
// {
//     students s; //s= korim
//         s.roll=10;
//         s.cls=10;
//         s.grp='A';
//         char nam[100] ="Md Merazul Islam";
//         strcpy(s.name,nam);

//         cout<<s.roll<<endl <<s.cls<<endl<<s.grp<<endl<<s.name;

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


};

int main()
{
    student korim;
    char nm[100]="Korim";
    strcpy(korim.name,nm);
    korim.roll=89;
    korim.cls=80;
    korim.section='A';
    cout<<"Name : "<<korim.name<<endl<<"Roll :"<<korim.roll<<endl<<"Class :"<<korim.cls<<endl<< "Section :"<<korim.section<<endl;
    

    return 0;
}