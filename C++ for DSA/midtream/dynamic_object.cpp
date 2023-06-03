#include <bits/stdc++.h>

using namespace std;
class person
{
public:
    string name;
    float height;
    int age;

    person(float h, int a, const ::string &n)
    {
        height = h;
        age = a;
        name = n;
    }
};
int main()
{
    person * karim=new person(5.10, 14, "Karim");
    person * rahim=new person(5.5, 10, "Rahim");

    karim->age > rahim->age ? cout<<karim->name : cout<<rahim->name;

    return 0;
}



