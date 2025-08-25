#include <iostream>
using namespace std;

void printString(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        cout << s[i];
    }
    cout << "\n";
}
/*
1. In ra ky tu so co trong chuoi
*/
void printNumber(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            cout << s[i];
        }
    }
}
/*
2. Dem so ky tu hoa, thuong, dac biet trong chuoi
*/
int countChar(char s[], int &countNormal, int &countSpecial)
{
    int countCap = 0;
    countNormal = 0;
    countSpecial = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        // special char
        if ((s[i] >= 33 && s[i] <= 47) ||
            (s[i] >= 58 && s[i] <= 64) || // : ; < = > ? @
            (s[i] >= 91 && s[i] <= 96) || // [ \ ] ^ _ `
            (s[i] >= 123 && s[i] <= 126)) // { | } ~
        {
            countSpecial++;
        }
        else if (s[i] >= 65 && s[i] <= 90)
        { // count caplocks
            countCap++;
        }
        else if (s[i] >= 97 && s[i] <= 122) // count normal case
        {
            countNormal++;
        }
    }

    return countCap;
}

/*
4.Dao nguoc chuoi
*/
void revertString(char s[], char newS[])
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        newS[i] = s[n - 1 - i];
    }
}
/*5_Kiem tra chuoi co ky tu dac biet*/
bool isSpecialCase(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 33 && s[i] <= 47) ||
            (s[i] >= 58 && s[i] <= 64) || // : ; < = > ? @
            (s[i] >= 91 && s[i] <= 96) || // [ \ ] ^ _ `
            (s[i] >= 123 && s[i] <= 126)) // { | } ~
        {
            return true;
        }
    }
    return false;
}
/*6_Kiem tra chuoi co ky tu so */
bool isNumberCase(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char s[100] = "Welcome To 2025!";
    //_1_In ky tu so co trong chuoi
    cout << "Ky tu so trong chuoi la:";
    printNumber(s);

    //_2_Dem ky tu hoa, thuong, dac biet trong chuoi
    char s2[] = "Hello@World!123";
    int demHoa, demThuong, demDacbiet;
    demThuong = 0;
    demDacbiet = 0;
    demHoa = countChar(s2, demThuong, demDacbiet);
    cout << "\nSo ky tu hoa trong chuoi la: " << demHoa << endl;
    cout << "\nSo ky tu thuong trong chuoi la: " << demThuong << endl;
    cout << "\nSo ky tu dac biet trong chuoi la: " << demDacbiet << endl;

    //_3 Dao nguoc chuoi
    char newS1[100];
    char newS2[100];
    cout << "\nChuoi sau khi dao nguoc la:\n";
    revertString(s, newS1);
    printString(newS1);
    revertString(s2, newS2);
    printString(newS2);

    /*5_Kiem tra chuoi co ky tu dac biet*/
    char s3[100] = "NoSpecialCase";
    cout << "\nChuoi co ky tu dac biet (1): " << isSpecialCase(s) << endl;
    cout << "Chuoi co ky tu dac biet (0):" << isSpecialCase(s3) << endl;

    /*6_Kiem tra chuoi co ky tu so */
    cout << "\nChuoi co ky tu so (1): " << isNumberCase(s) << endl;
    cout << "Chuoi co ky tu so (0):" << isNumberCase(s3) << endl;
    return 0;
}