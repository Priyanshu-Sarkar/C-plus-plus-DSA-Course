#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    rows = 5;
    cols = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (j == cols || j == 1 || i == rows || i == 1 || j == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}