#include <iostream>
using namespace std;

int main()
{
    int a, b, primeNos;
    primeNos = 0;
    a = 5;
    b = 23;
    for (int i = a + 1; i < b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << endl;
            primeNos++;
        }
    }
    cout << "Total Prime nos between " << a << " and " << b << ": " << primeNos << endl;
    return 0;
}