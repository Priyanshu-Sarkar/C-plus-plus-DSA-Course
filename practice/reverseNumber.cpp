#include <iostream>
using namespace std;

int main()
{
    int num;
    int reverse = 0;
    int lastDigit;
    num = 15793;
    while (num > 0)
    {
        lastDigit = num % 10;
        reverse = (10 * reverse) + lastDigit;
        num /= 10;
    }
    cout << reverse;
    return 0;
}