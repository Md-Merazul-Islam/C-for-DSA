#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream a(s);
    string word;
    int cnt = 0;

    while (a >> word)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}