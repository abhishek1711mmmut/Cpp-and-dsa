#include <iostream>
using namespace std;

int singleNonDuplicate(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int leftValue = -1;
        if (mid - 1 >= 0)
        {
            leftValue = arr[mid - 1];
        }
        int rightValue = -1;
        if (mid + 1 < size)
        {
            rightValue = arr[mid + 1];
        }
        int currentValue = arr[mid];
        if (currentValue != leftValue && currentValue != rightValue)
        {
            return currentValue;
        }
        if (mid & 1)
        {
            if (leftValue == currentValue)
            {
                s = mid + 1;
            }
            else if (currentValue == rightValue)
            {
                e = mid - 1;
            }
        }
        else
        {
            if (currentValue == rightValue)
            {
                s = mid + 1;
            }
            else if (currentValue == leftValue)
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 9, 5, 5, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    int ans = singleNonDuplicate(arr, size);
    cout << "Non - duplicate element is : " << ans << endl;
    return 0;
}