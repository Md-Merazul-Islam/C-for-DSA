#include <bits/stdc++.h>

using namespace std;
void fun(string &s)   //[note : must nedded (&)]
{
    s="World";
}
int main()
{
    string s= "Hello";
    fun(s);
    cout<<s<<endl;
    return 0;
}