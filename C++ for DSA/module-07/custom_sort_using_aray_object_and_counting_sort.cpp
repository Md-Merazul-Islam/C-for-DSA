#include <bits/stdc++.h>

using namespace std;
class CustomSort
{
public:
    char c;
    int cnt;
};
bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true; // > ei sing mane boro theke choto
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    CustomSort frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i + 'a'); // eikahne i=0 asche. tar por 97 ba (a) plush + koray ta (a te ba character e change hoye geche)
        frq[i].cnt = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        frq[ch - 'a'].cnt++;
    }
    sort(frq, frq + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (frq[i].cnt > 0)
        {

            for (int j = 0; j < frq[i].cnt; j++)
            {
                cout << frq[i].c;
            }
        }
    }

    return 0;
}