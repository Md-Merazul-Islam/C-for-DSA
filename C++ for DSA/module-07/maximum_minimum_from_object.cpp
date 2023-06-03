#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int roll;
    int number;
};

int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].number;
        cin >> a[i].roll;
        cin.ignore();
    }

    student mx;
    mx.number= INT_MIN;
    for (int i=0;i<3;i++)
    {
        if ( a[i].number>mx.number)
        {
            mx=a[i];
        }
    }
    cout<<mx.name<<endl<<mx.roll<<endl<<mx.number<<endl;
    student mn;
    mn.number=INT_MAX;
for (int i=0;i<3;i++)
    {
        if ( a[i].number<mx.number)
        {
            mx=a[i];
        }
    } 
    cout<<mx.name<<endl<<mx.roll<<endl<<mx.number<<endl;


    return 0;
}