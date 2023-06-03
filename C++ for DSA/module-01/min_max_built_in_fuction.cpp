#include <iostream>
using namespace std;
int max2(int a,int b)
{
    if (a>b) return a;
    else return b;
}
int min1 (int a,int b)
{
    if (a<b) return a;
    else return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int result = max2(a,b);
    int result2 = min1(a,b);
    cout<< result2<< " "<<result<<endl;

    return 0; 
}