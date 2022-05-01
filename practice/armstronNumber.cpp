#include <iostream>
using namespace std;

int main()
{
    int num, n, temp;
    int newNum = 0;
    num = 154;
    n = num;
    while (n > 0)
    {
        temp = n % 10;
        newNum += temp * temp * temp;
        n /= 10;
    }
    if (num == newNum)
    {
        cout << num << " is an armstrong number";
    }
    else
    {
        cout << num << " isn't an armstrong number";
    }
    return 0;
}