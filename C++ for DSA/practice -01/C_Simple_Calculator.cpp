#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int  x,p;
    cin>>x>>p;
    long long int summation,multipication,subtraction;
    summation=x+p;
    multipication = x*p;
    subtraction = x-p;


    cout<< x<<" + "<<p<<" = "<<summation<<endl;
    cout<< x<<" * "<<p<<" = "<<multipication<<endl;
    cout<< x<<" - "<<p<<" = "<<subtraction<<endl;
    return 0;
}