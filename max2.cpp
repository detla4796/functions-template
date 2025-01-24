#include <iostream>
using namespace std;

int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int main() 
{
    cout << max(1, 4) << endl;
    return 0;
}