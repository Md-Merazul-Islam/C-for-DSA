#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char section;
    int math_mark;
    int eng_mark;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    student obj[n];

    for (int i = 0; i < n; i++)
    {
        cin>>obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].section;
        cin >> obj[i].math_mark;
        cin >> obj[i].eng_mark;
        cin.ignore();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].section << " " << obj[i].math_mark << " " << obj[i].eng_mark << endl;
    }

    return 0;
}
