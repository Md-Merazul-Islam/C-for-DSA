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

    for (int i=0;i<2;i++)
    {
        for (int j=i+1;j<3;j++)
        {
            if (a[i].number > a[j].number)
            {
                swap(a[i],a[j]);
            }
        }

    }

    for (int i=0;i<3;i++)
    {
         cout<<a[i].name<<endl<<a[i].roll<<endl<<a[i].number<<endl;
    }

    return 0;
}