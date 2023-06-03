#include <bits/stdc++.h>
using namespace std;
class car {
    public:
    int price;
    car(int p )
    {
        price=p;
    }
};


int main()
{
    car bike(1000000);
    cout<<bike.price<<endl;
    
    return 0;
}