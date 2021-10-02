#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    cout << "1~100의 합 : " << sum << endl;

    int num = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            num += i;
    }
    cout << "1~100사이 짝수의 합 : " << num << endl;


    int three = 0;
    int ex = 0;
    for (int three = 1; three <= 100; three++)
    {
        if (three % 3 == 0)
            ex = three + ex;
    }
    cout << "1~100사이 3배수의 합 : " << ex << endl;

    int j = 0;
    int k = 0;
    for (int j = 1; j < 100; j++)
    {
        if (j % 3 == 0)
            k = j + k;
    }
    cout << k << endl;
    return 0;
}