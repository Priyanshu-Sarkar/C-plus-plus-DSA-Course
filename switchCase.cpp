#include <iostream>
using namespace std;

int main()
{
    char button;
    button = 'b';
    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    default:
        cout << "You are always welcomed!";
    }

    return 0;
}