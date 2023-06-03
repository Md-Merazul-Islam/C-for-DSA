#include<iostream>
using namespace std;
// int my_fun(int *a,int *b)
// {
//     int temp=0;
//     temp=*a;
//     *a=*b;
//     *b=temp;

// }
int main ()
{
    int a,b;
    cin>> a>>b;
    // int res= my_fun(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b;


    return 0;
}  