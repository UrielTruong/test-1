#include <iostream>
using namespace std;
const int COLUMN = 10;

void print2DArray(int a[][COLUMN], int row_column)
{
    for (int i = 0; i < row_column; i++)
    {
        for (int j = 0; j < row_column; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void printDuongCheo()
{
}

int main()
{

    int a[10][10] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}

        };

    int n = 3;

    print2DArray(a, n);

    // upperTriangle
    // underTriangle

    cout
        << a;
    return 0;
}