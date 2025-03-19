#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(33);
    arr.push_back(44);
    arr.push_back(55);
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    make_heap(arr.begin(), arr.end());
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // insertion
    arr.push_back(66);
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    push_heap(arr.begin(), arr.end());
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // deletion
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();
    for (int a : arr)
    {
        cout << a << " ";
    }
    return 0;
}