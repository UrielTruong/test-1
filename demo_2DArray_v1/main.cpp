#include <iostream>
using namespace std;

const int COLUMN = 10;

void input2DArray(int a[][COLUMN], int &row, int &column)
{
        cout << "Nhap so luong dong va cot ";
        cin >> row >> column;

        cout << "Nhap gia tri cho tung cell" << endl;
        for (int i = 0; i < row; i++)
        {
                for (int j = 0; j < column; j++)
                {
                        printf("Nhap vi tri [%d][%d]: \t", i, j);
                        cin >> a[i][j];
                }
        }
}

void print2DArray(int a[][COLUMN], int row, int column)
{
        for (int i = 0; i < row; i++)
        {
                for (int j = 0; j < column; j++)
                {
                        cout << a[i][j] << "  ";
                }
                cout << endl;
        }
}
int main()
{
        // datatype ten_array [size_row][size_column]
        // 2D array la tap hop nhieu mang 1 chieu
        int array[50][COLUMN] = {
            {1, 3, 5, 7, 9},       // 00
            {2, 4, 6, 8, 10},      // 01
            {10, 20, 30, 40, 50}}; // 02

        int array2[50][COLUMN] = {
            {11, 31, 51, 71, 91},       // 00
            {21, 41, 61, 81, 11},       // 01
            {101, 201, 301, 401, 501}}; // 02

        cout << array[0][2] << endl;
        // cout << array[0] << endl; // in ra dia chi cua mang 01
        cout << array[1][3] << endl;
        cout << array[2][4] << endl;

        int row = 3;
        int column = 2;

        int b[50][10];

        input2DArray(b, row, column);
        print2DArray(b, row, column);

        // print2DArray(array, row, column);
        // print2DArray(array2, row, column);

        return 0;
}