#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //manuali c programmm 

    // int max = a[0];
    // for (int i = 0; i < n; i++)
    // {

    //     if (max < a[i])
    //     {
    //         max = a[i];
    //     }
    // }
    // cout << max << " ";



    // c++ using built in function max/min (maximum=max(maximum,a[i]);)
     int maximum = a[0];
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, a[i]);
    }
    cout << maximum << " ";

    return 0;
}