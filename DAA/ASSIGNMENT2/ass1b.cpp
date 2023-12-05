// FINDING MAXIMUM AND MINIMUM USING DIVIDE AND CONCURE METHOD
#include <iostream>
using namespace std;
int num, a[100], maxv, minv;
void maxmin(int i, int j, int a[], int &max, int &min)
{
    int max1, min1;
    if (i == j)
    {
        max = min = a[i];
    }
    else if (j - i == 1)
    {
        if (a[i] > a[j])
        {
            max = a[i];
            min = a[j];
        }
        else
        {
            max = a[j];
            min = a[i];
        }
    }
    else
    {
        int mid = i + (j - i) / 2;
        maxmin(i, mid, a, max, min);
        max1 = max;
        min1 = min;
        maxmin(mid + 1, j, a, max, min);
        if (max1 > max)
        {
            max = max1;
        }
        if (min1 < min)
        {
            min = min1;
        }
    }
}
int main()
{

    cout << "enter the number of terms of array" << endl;
    cin >> num;
    cout << "enter the array element" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << "array is" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a[i];
        cout << "\t";
    }
    maxmin(0, num - 1, a, maxv, minv);
    cout << endl;
    cout << "maximum of the array element is : " << maxv << endl;
    cout << "manimum of the array element is : " << minv << endl;
    return 0;
}