#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].cls;
        cin >> a[i].s;
        cin >> a[i].id;
        cin.ignore();
    }
    int tmp=0;
    for (int i = 0; i < n; i++)
    {
       for (int j=i+1;j<n;j++)
       {
            tmp=a[i].id;
            a[i].id=a[j].id;
            a[j].id=tmp;
            
       }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<  a[i].name<<" ";
        cout<<  a[i].cls<<" ";
        cout<<  a[i].s<<" " ;
        cout<<  a[i].id<<endl;
       
    }

    return 0;
}