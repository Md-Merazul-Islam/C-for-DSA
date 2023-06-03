#include <bits/stdc++.h>

using namespace std;
class person{
    public:
        string name;
        int age;
        int marks;
        int marks2;
        person(string nam,int ag,int m1,int m2)
        {
            name=nam;
            age=ag;
            marks=m1;
            marks2=m2;
        }
        void fun()
        {
            cout<<name<<endl<<age<<endl;
        }
        int total_marks()
        {
            return marks2+marks;
        }
};
int main()
{
    person meraz("Md Merazul Islam",6834,23,93);
    // cout<<meraz.name<<endl<< meraz.age;
    meraz.fun();
   cout<< meraz.total_marks();

    return 0;
}