#include <iostream>
using namespace std;

template <typename T>
T avg(T arr[], int n) 
{
    T sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum / n;
}

int main() 
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << avg(arr, n) << endl;
    return 0;
}