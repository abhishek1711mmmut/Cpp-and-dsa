#include <iostream>
using namespace std;

void replaceChar(char originalChar, char newChar, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == originalChar)
        {
            arr[i] = newChar;
        }
    }
}

int main()
{
    char arr[100];
    cout << "Enter your name" << endl;
    cin.getline(arr, 100, '\t'); // \t is a delimiter which means that the array will only take input before the delimiter character. After the delimiter, all input characters are ignored.
    cout << arr << endl;
    replaceChar('@',' ', arr, 100);
    cout << arr << endl;
    return 0;
}