#include <iostream>
using namespace std;

class functorOne
{
public:
    bool operator()(int a, int b)
    {
        // comparator for descending order
        return a > b;
    }
};

int main()
{
    functorOne cmp;
    if (cmp(10, 5))
    {
        cout << "10 is greater than 5" << endl;
    }
    else
    {
        cout << "5 is greater than 10" << endl;
    }
    return 0;
}