#include <bits/stdc++.h>

using namespace std;
class person{
    public:
        string name ;
        int age;
        person(string name ,int age )
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    person * rakib = new person("RAKIB VAI",20);
    person * sakib = new person("SAKIB VAI",49);
     
    *sakib=*rakib;
    delete rakib;
    cout<<sakib->name<<endl<<sakib->age;

    
    return 0;
}