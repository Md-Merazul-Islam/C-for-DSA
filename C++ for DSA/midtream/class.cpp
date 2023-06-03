#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    char name[100];
    int roll;
    char section;
    int num;
};
int main()
{
    student std;
    std.roll = 10;
    std.num = 80;
    std.section = 'A';
    char nm[100] = "Meraz";
    strcpy(std.name, nm);

    cout << std.name << endl;
    cout << std.roll << endl;
    cout << std.section << endl;
    cout << std.num << endl;

    return 0;
}