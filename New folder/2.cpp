#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int c = 0;

        for (int i = 0; i < x; i++)
        {

            int a = y;
            int b;

            if (a % z == 0)
            {
                b = a / z;
            }
            else
            {
                b = (a / z) + 1;
            }
            c = c + b;
        }
        cout << c << endl;
    }

    return 0;
}