#include <bits/stdc++.h>

using namespace std;
int main()
{
    char x;
    cin>> x;
    if (x>='0' && x<='9')
    {
        cout<<" IS DIGIT" << endl;

    }
    else if (( x<='z' && x>='a')|| (x<='Z' && x>='A')) 
    {
        cout << "ALPHA"<<endl;
        if (x<='z' && x>='a')
        {
            cout << "IS SMALL"<<endl;
        }
        if (x<='Z' && x>='A')
        {
            cout <<"IS CAPITAL"<<endl;
        }
    }
    return 0;
}