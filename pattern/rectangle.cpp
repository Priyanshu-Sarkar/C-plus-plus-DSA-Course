#include <iostream>
using namespace std;

int main()
{
    int w, h;
    w = 5;
    h = 4;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}