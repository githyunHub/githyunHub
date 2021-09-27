#include <iostream>

using namespace std;

int main()
{
    int Gugu;
    cin >> Gugu;

    for (int i = 1; i <= 9; i++)
    {
        cout << Gugu << " * " << i << " = " << Gugu * i << endl;
    }

    cout << endl;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << i << " * " << j << " = " << i * j << "   ";
        }
        cout << endl;
    }
}
