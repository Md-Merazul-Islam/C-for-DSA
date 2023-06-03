#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int roll;
    int number;
};
bool fun(student a, student b)
{
    if (a.roll > b.roll)
        return true; // eita boro theke choto
    else
        return false;
}
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
    sort(a, a + 3, fun); //sort (array_name,array_name+size,user_defined_bool_function)
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << endl
             << a[i].roll << endl
             << a[i].number << endl;
    }

    return 0;
}