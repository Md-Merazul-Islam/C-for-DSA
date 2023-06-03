#include <bits/stdc++.h>

using namespace std;
int main()
{
    string name;
    getline(cin, name);
    stringstream ss(name);
    string word;
    
    bool answer;

    while (ss >> word)
    {
        if (word == ("Ratul"))
        {
            answer = true;
            break;
        }
        else
        {
            answer=false;
        }

       
    }

    if (answer== true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}


