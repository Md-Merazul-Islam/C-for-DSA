#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // int *a= new int [n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<< " ";
    // }

    // float*a= new float[n];
    // for (int i=0;i<n;i++)
    // {
    //     cin>>a[i];
        
    // }
    // for (int i=0;i<n;i++)
    // {
    //     cout<<fixed<<setprecision(2) <<a[i]<<" ";

    // }

    char *a = new char[5];
    for(char i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(char i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}