#include <bits/stdc++.h>

using namespace std;
int main()
{
    // string s="md merazul islam how are you boy ";
    // // cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s.size()<<endl;

    // string s="hello_meraz";
    // s.resize(15,'H');
    // cout<< s<<endl;

    string s;
    cin >> s;
    cout << s[0] << endl;
    cout << s.front() << endl;
    cout << s.at(0) << endl;
    cout << s.back() << endl;
    cout <<s[s.size() - 1] << endl;

    return 0;
}