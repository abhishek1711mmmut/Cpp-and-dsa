#include <iostream>
using namespace std;

void transpose2dMatrix(int arr[][3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {
            swap(arr[i], arr[j]);
        }
    }
}

void print2dArray(int arr[][3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32}};

    transpose2dMatrix(arr, 3, 3);

    print2dArray(arr, 3, 3);

    return 0;
}