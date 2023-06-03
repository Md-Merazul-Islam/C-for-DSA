#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char frq[26] = {0};              // sob gula charater re 0 dhore niche .

    for (int i = 0; i < n; i++)
    {
        char input_character;
        cin >> input_character;
        frq[input_character - 'a']++; /*eikhane je charater input neya hoiche ,
                                        ta theke 'a'= 97  minuse(-) kore er index
                                        ber kora hoiche . tar por oi frequency array
                                        te index onujayi count hocche*/
    }
    for (char i = 'a'; i < 'z'; i++) // eikhane oi character ke checke kora hoyeche tara (a-z) er maje naki .
    {
        if (frq[i - 'a'] > 0)           /* je character ta asbe ta theke 97 ba (a) mainus 
                                        kora hole ta jodi (valu>0)  0 theke boro hoy tahole 
                                        oita array er loper bitor dokbe ,and loop ta tar value
                                        porjonto cholbe .last print kore dibe */
        
        {
            for (int j = 0; j < frq[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }
    return 0;
}

