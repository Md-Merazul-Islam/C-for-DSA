#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    char name[100];
    int roll;
    char section;
    int num;
    student(int r, int s, int number, char *n)
    {
        roll = r;
        section = s;
        num = number;
        strcpy(name, n);
    }
};
int main()
{
    student std(10, 'A', 80, "Meraz");

    cout << std.name << endl;
    cout << std.roll << endl;
    cout << std.section << endl;
    cout << std.num << endl;
    return 0;
}