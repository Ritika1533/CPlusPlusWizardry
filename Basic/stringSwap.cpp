#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char strOne[50], strTwo[50], strTmp[50];
    cout << "Enter the First String: ";
    gets(strOne);
    cout << "Enter the Second String: ";
    gets(strTwo);
    cout << "\nString before Swap:\n";
    cout << "First String = " << strOne << "\tSecond String = " << strTwo;
    strcpy(strTmp, strOne);
    strcpy(strOne, strTwo);
    strcpy(strTwo, strTmp);
    cout << "\n\nString after Swap:\n";
    cout << "First String = " << strOne << "\tSecond String = " << strTwo;
    cout << endl;
    return 0;
}