// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of n : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for (int j = i; j >= 0; j--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}