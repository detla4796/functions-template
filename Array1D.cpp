#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int n) 
{
    T max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMax(arr, n) << endl;
    return 0;
}