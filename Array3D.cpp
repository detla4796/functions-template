#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[][3][2], int n, int k, int m)
{
    T max = arr[0][0][0];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < k; j++) 
        {
            for (int l = 0; l < m; k++) 
            {
                if (arr[i][j][l] > max)
                {
                    max = arr[i][j][l];
                }
            }
        }
    }
    return max;
}

int main() 
{
    int arr[2][3][2] = { {{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}} };
    cout << findMax(arr, 2, 3, 2) << endl;
    return 0;
}