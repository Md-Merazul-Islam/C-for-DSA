#include <bits/stdc++.h>

using namespace std;
class person{
    public:
        string name;
        int age;
       
        person(string name,int age)
        {
          this->name=name;
          this->age=age;


        //   --->
        // (*this).name=name; 
        // (*this).age=age ;

        }
        
};
int main()
{
    person meraz("Md Merazul Islam",6834);
   cout<<meraz.name<<endl<<meraz.age;


    return 0;
}