#include <iostream>
#include <string.h>

using namespace std;

/*
input
    char s[]

ouput
*/
void getCapChar(char s[], char newS[])
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            newS[j] = s[i];
            j++;
        }
    }
    // newS[j] = '\0';
}
/*
count ky tu thuong va ky tu so
input
    char s[]
output
    return int kytuthuong
    int & ky tu so
*/

int countNormalCharNumber(char s[], int &countNumber)
{
    int countChar;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            countNumber++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            countChar++;
        }
    }

    return countChar;
}

int main()
{
    char s[100] = "1 Ky Thuat Lap Trinh C++ CAP 2";
    char newS[100];

    getCapChar(s, newS);

    cout << newS << endl;

    int countNumber;
    int countChar = countNormalCharNumber(s, countNumber);
    cout << "so luong ky tu la " << countChar << endl;
    cout << "so luong so la " << countNumber << endl;

    return 0;
}