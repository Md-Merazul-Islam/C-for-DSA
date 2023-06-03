// #include <iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     switch (n)
//     {
//         case 1:
//             cout <<("One ")<<endl;
//             break;
//         case 2:
//             cout<<"Two" <<endl;
//             break;
//         case 3:
//             cout<<"Three" << endl;
//             break;
//         case 4:
//             cout<<"Foure" << endl;
//             break;
//         case 5:
//             cout<<"Five"<<endl;
//             break;
//         default:
//             cout << "Did not match this number "<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int v;
    cin >> v;
    switch (v)

    {

    case 1:

        cout << "hello\n";
        break;

    case 2:

        cout << "hello2\n";
        break;
    case 3:

        cout << "hell3\n";
        break;
    case 4:

        cout << "hello4\n";
        break;
    case 5:

        cout << "hello5\n";
        break;
    default:
        cout << "Don't match ";
    }

    return 0;
}