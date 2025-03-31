#include <iostream>
using namespace std;

double sqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == x)
        {
            ans = mid;
            break;
        }
        if (mid * mid > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    double sqrtAns = (double)ans;

    int precision;
    cout << "Enter the precision: " << endl;
    cin >> precision;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        double tempAns = sqrtAns;
        for (int i = 0; i < 10; i++)
        {
            double d = sqrtAns + (factor * i);
            if (d * d <= x)
            {
                tempAns = d;
            }
            else
            {
                break;
            }
        }
        sqrtAns = tempAns;
    }
    return sqrtAns;
}

int main()
{
    int x;
    cout << "Enter the no. to find square root: " << endl;
    cin >> x;
    double ans = sqrt(x);
    cout << "Square root is " << ans << endl;
    return 0;
}