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

/*3. Tim phan tu lon nhat cua mang*/
int findMax(int a[][5], int row, int column)
{

    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
/*4. Dem so nguyen to co trong mang*/
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

/*5. IN ra cacphan tu nam nua tren duong cheo chinh*/
void printDuongCheoChinh(int a[][5], int row, int column)
{
    cout << "\nCac phan tu nua tren duong cheo chinh, khong bao gom duong cheo:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < column; j++)
        {

            cout << a[i][j] << " ";
        }
    }
    cout << endl;

    cout << "Cac phan tu nua tren duong cheo chinh, bao gom duong cheo:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {

            cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

/*6. IN ra cacphan tu nam nua tren duong cheo phu*/
void printDuongCheoPhu(int a[][5], int row, int column)
{
    cout << "\nCac phan tu nua tren duong cheo phu, khong bao gom duong cheo:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i + j < column - 1)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "Cac phan tu nua tren duong cheo phu, bao gom duong cheo:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i + j <= column - 1)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

/*7. Tra ve cac phan tu nam nua tren duogn cheo chinh*/
void printDuongCheoChinh(int a[][5], int row, int column, int b[], int &n)
{
    n = 0;
    cout << "\n7. Cac phan tu nua tren duong cheo chinh, khong bao gom duong cheo:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < column; j++)
        {
            if (i < j)
            {
                b[n] = a[i][j];
                n++;
            }
        }
    }
}

/*8. Tinh tong cac phan tu nam duoi duong cheo phu*/
int sumPTUnderDuongCheoPhu(int a[][5], int row, int column)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i + j > column - 1)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
/*9. Tim gia tri giao nhau giua duong cheo chinh va duong cheo phu*/
void findDiemGiao(int a[][5], int row, int column, int b[], int &n)
{
    n = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // thoa 2 dieu kien cung luc
            if (i == j && i + j < row - 1)
            {
                b[n++] = a[i][j];
            }
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

    /*3. Tim phan tu lon nhat cua mang*/
    int max = findMax(squareMatrix, 5, 5);
    cout << "\nPhan tu lon nhat trong mang la: " << max << endl;

    /*4. Dem so nguyen to co trong mang*/
    int count = countPrime(squareMatrix, 5, 5);
    cout << "\So nguyen to co trong mang la: " << count << endl;

    /*5. IN ra cacphan tu nam nua tren duong cheo chinh*/
    printDuongCheoChinh(squareMatrix, 5, 5);

    /*6. IN ra cacphan tu nam nua tren duong cheo phu*/
    printDuongCheoPhu(squareMatrix, 5, 5);
    /*7. Tra ve cac phan tu nam nua tren duogn cheo chinh*/
    int newA[100];
    int n;
    printDuongCheoChinh(squareMatrix, 5, 5, newA, n);
    for (int i = 0; i < n; i++)
    {
        cout << newA[i] << ", ";
    }
    cout << endl;

    /*8. Tinh tong cac phan tu nam duoi duong cheo phu*/
    int sumUnder = sumPTUnderDuongCheoPhu(squareMatrix, 5, 5);
    cout << "\nTong cac phan tu nam duoi duong cheo phu la: " << sumUnder << endl;

    /*9. Tim gia tri giao nhau giua duong cheo chinh va duong cheo phu*/
    int newB[100];
    int m;
    cout << "\n10. Diem giao giua duong cheo chinh va phu:\n";
    findDiemGiao(squareMatrix, 5, 5, newB, m);
    for (int i = 0; i < m; i++)
    {
        cout << newB[i] << ", ";
    }
    cout << endl;

    return 0;
}