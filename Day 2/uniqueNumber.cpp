#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 4, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(int);
    int ans = findUniqueNumber(arr, size);
    cout << "Unique number is " << ans << endl;
    return 0;
}