#include <iostream>
#include <math.h>
using namespace std;

/*2. In mang 2 chieu theo dang ma tran*/
void printMatrix(int a[][5], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

/*14. In_Dem so nguyen to co trong mang*/
int countPrime(int a[][5], int row, int column)
{
    int countPrime = 0;
    cout << "\nSo nguyen to trong mang la: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            bool isPrime = true;
            if (a[i][j] < 2)
            {
                continue;
            }
            for (int t = 2; t <= sqrt(a[i][j]); t++)
            {
                if (a[i][j] % t == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                countPrime++;
                cout << a[i][j] << "; ";
            }
        }
    }
    cout << endl;

    return countPrime;
}

/*10. Tim gia tri nho nhat tren tung dong cua mang*/
void findMinRow(int a[][5], int row, int column, int b[], int &m)
{
    m = 0;
    for (int i = 0; i < row; i++)
    {
        int min_row = a[i][0];
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] < min_row)
            {
                min_row = a[i][j];
            }
        }
        b[m] = min_row;
        m++;
    }
}
/*11. Tim gia tri lon nhat cho tung cot cua mang*/
void findMaxColumn(int a[][5], int row, int column, int b[], int &m)
{
    m = 0;
    for (int j = 0; j < column; j++)
    {
        int max_column = a[0][j];
        for (int i = 1; i < row; i++)
        {
            if (a[i][j] > max_column)
            {
                max_column = a[i][j];
            }
        }
        b[m] = max_column;
        m++;
    }
}
/*12. Kiem tra mang co toan gia tri chan*/
bool isEven(int a[][5], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                return false;
            }
        }
    }
    return true;
    cout << endl;
}

/*13. Tim gia tri chan lon nhat cua mang*/
int findMaxEven(int a[][5], int row, int column)
{

    int maxEven = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                if (a[i][j] > maxEven)
                {
                    maxEven = a[i][j];
                }
            }
        }
    }
    return maxEven;
}
/*15. IN ra so lan cac gia tri xuat hien trong mang
 */
void countChar(int a[][5], int row, int column, int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int x = a[i][j];
            if (x >= 0 && x < n) // tránh truy cập ngoài mảng
                b[x]++;
        }
    }
}

int main()
{
    int squareMatrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };
    /*2. In mang 2 chieu theo dang ma tran*/
    printMatrix(squareMatrix, 5, 5);

    /*10. Tim gia tri nho nhat tren tung dong cua mang*/
    int a[100];
    int n;
    cout
        << "Gia tri nho nhat tren tung dong la:\n";
    findMinRow(squareMatrix, 5, 5, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    /*11. Tim gia tri lon nhat tren tung cot cua mang*/
    int b[100];
    int m;
    cout
        << "Gia tri lon nhat tren tung cot la:\n";
    findMaxColumn(squareMatrix, 5, 5, b, m);
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << ", ";
    }
    cout << endl;

    /*12. Kiem tra mang co toan gia tri chan*/
    cout << "\nMang co toan gia tri chan (0)" << isEven(squareMatrix, 5, 5) << endl;

    /*13. Tim gia tri chan lon nhat cua mang*/
    int maxEven = findMaxEven(squareMatrix, 5, 5);
    cout << "\nGia tri chan lon nhat trong mang la: " << maxEven << endl;

    /*14. Dem so nguyen to co trong mang*/
    int count = countPrime(squareMatrix, 5, 5);
    cout << "\So nguyen to co trong mang la: " << count << endl;

    /*15. IN ra so lan cac gia tri xuat hien trong mang
     */

    int c[3][5] = {
        {1, 2, 3, 2, 1},
        {4, 2, 1, 3, 4},
        {1, 1, 2, 4, 3}};
    int d[10]; // mảng đếm

    countChar(c, 3, 5, d, 10);

    for (int i = 0; i < 10; i++)
    {
        if (d[i] > 0)
            cout << "So " << i << " xuat hien " << d[i] << " lan\n";
    }

    return 0;
}