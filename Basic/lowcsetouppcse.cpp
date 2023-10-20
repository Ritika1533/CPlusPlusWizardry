#include <iostream>
using namespace std;
int main()
{
    char chLower, chUpper;
    int ascii;
    cout << "Enter the Character: ";
    cin >> chLower;
    ascii = chLower;
    ascii = ascii - 32;
    chUpper = ascii;
    cout << "\nUppercase: " << chUpper;
    cout << endl;
    return 0;
}