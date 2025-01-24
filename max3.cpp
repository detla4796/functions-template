#include <iostream>
using namespace std;

int max(int a, int b, int c) 
{
    return max(max(a, b), c);
}

int main() 
{
    cout << max(4, 2, 5) << endl;
    return 0;
}