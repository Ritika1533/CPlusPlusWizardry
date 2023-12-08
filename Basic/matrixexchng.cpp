// C++ code to swap the element of first 
// and last column and display the result 
#include <iostream> 
using namespace std; 
  
#define n 4 
  
void interchangeFirstLast(int m[][n]) 
{  
    // swapping of element between first 
    // and last columns 
    for (int i = 0; i < n; i++)  
    { 
        int t = m[i][0]; 
        m[i][0] = m[i][n - 1]; 
        m[i][n - 1] = t; 
    } 
} 
  
// Driver function 
int main() 
{ 
    // input in the array 
    int m[n][n] = {{8, 9, 7, 6}, 
                   {4, 7, 6, 5}, 
                   {3, 2, 1, 8}, 
                   {9, 9, 7, 7}}; 
  
    interchangeFirstLast(m); 
  
    // printing the interchanged matrix 
    for (int i = 0; i < n; i++)  
    { 
        for (int j = 0; j < n; j++) 
            cout << m[i][j] << " "; 
        cout << endl; 
    } 
} 