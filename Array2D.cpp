#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[][3], int n, int k) 
{
    T max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() 
{
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    cout << findMax(arr, 2, 3) << endl;
    return 0;
}