#include <iostream>
using namespace std;
int main()
{

    // 1. swap two numbers using arithmetic method
    int a = 5;
    int b = 7;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;

    // 2. xor method
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b << endl;
}