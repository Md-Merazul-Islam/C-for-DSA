#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> characters(n);
    for (int i = 0; i < n; i++)
    {
        cin >> characters[i];
    }

    sort(characters.begin(), characters.end());

    for (int i = 0; i < n; i++)
    {
        cout << characters[i];
    }

    return 0;
}