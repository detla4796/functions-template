#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
void quadraticRoots(T a, T b, T c, T& x1, T& x2) 
{
    T discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) 
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
}

int main() 
{
    double a = 1, b = -3, c = 2;
    double x1, x2;
    quadraticRoots(a, b, c, x1, x2);
    cout << x1 << " " << x2 << endl;
    return 0;
}