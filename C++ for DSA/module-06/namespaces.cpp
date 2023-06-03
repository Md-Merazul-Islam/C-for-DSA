#include <bits/stdc++.h>

using namespace std;
namespace rakib
{
    int age1 = 30;
    void fun()
    {
        cout << "Hello Rakib" << endl;
    }
};
namespace sakib
{
    int age2 = 80;
    void fun()
    {
        cout << "Hello sakib" << endl;
    }
};
// using namespace sakib;
using namespace rakib;
int main()
{
    cout<<age1<<endl;
    fun();
    sakib::fun();
  
    

    return 0;
}