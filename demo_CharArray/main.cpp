#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "Thu Duc"; // chua dc su dung
    char c = 'A';

    char a[10] = {'T', 'h', 'u', ' ', 'd', 'u', 'c', '\0'};
    char x[100] = "Thu Duc";
    int n = 7;

    cout << x << endl;

    char b[100];
    strcpy(b, x);

    cout << b << endl;

    return 0;
}