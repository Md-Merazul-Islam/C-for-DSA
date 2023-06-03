
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
    person * meraz=new person(5.10, 82, "MD MDERAZUL ISLAM");
   cout<<meraz->name<<endl;
    return 0;
}