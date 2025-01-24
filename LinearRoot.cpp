#include <iostream>
using namespace std;

template <typename T>
T linearRoot(T a, T b) 
{
    return -b / a;
}

int main() 
{
    double a = 2, b = -4;
    cout << linearRoot(a, b) << endl;
    return 0;
}