#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   
    // type---1
    // int min=a;
    // int max=a;
    
    // if (b<min) min=b;
    // if (b>max) max=b;
    // if(c<min) min =c;
    // if (c>max) max=c;

    //type --2
    int min=0;
    int max=0;
    if (a>b && a>c ) max=a;
    if (b>a && b>c ) max=b;
    if (c>b && c>a ) max=c;
    if (a<b && a<c ) min=a;
    if (b<a && b<c ) min=b;
    if (c<b && c<a ) min=c;


    cout<<min<<" "<<max;
    return 0;
}