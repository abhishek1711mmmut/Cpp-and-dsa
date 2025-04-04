#include <iostream>
using namespace std;

int getQuotient(int divident, int divisor)
{
    int s = 0;
    int e = divident;
    int mid = s + ((e - s) >> 1);
    int ans = -1;

    while (s < e)
    {
        if (mid * divisor == divident)
        {
            return mid;
        }

        if (mid * divisor < divident)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) >> 1);
    }
    return ans;
}

int main()
{
    int divisor = 3;
    int divident = -13;
    int quotient = getQuotient(divident, divisor);
    if ((divident > 0 and divisor < 0) or (divident < 0 and divisor > 0))
    {
        quotient = 0 - quotient;
    }

    cout << quotient << endl;
    return 0;
}