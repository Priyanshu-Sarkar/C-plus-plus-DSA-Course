#include <iostream>
using namespace std;

int main()
{
    int n = 29;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is composite";
            break;
        }
    }
    if (i == n)
    {
        cout << "Number is prime" << endl;
    }
    return 0;
}
