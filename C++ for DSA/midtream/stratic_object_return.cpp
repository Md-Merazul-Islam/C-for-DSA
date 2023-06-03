#include <bits/stdc++.h>

using namespace std;
int *fun()
{
    int a[]={1,2,3};
    return a;
}
int main()
{
    int *a=fun();
    cout<< *a;
    
    return 0;
}