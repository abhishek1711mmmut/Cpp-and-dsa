#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVV(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
}

// create comparator for sorting vector bases on 1st index
bool myComparator(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1]; // inc order
}

int main()
{
    vector<vector<int>> v = {{1, 44}, {0, 55}, {0, 22}, {0, 11}, {2, 33}};
    printVV(v);
    sort(v.begin(), v.end(), myComparator);
    cout << "After sorting:" << endl;
    printVV(v);
    return 0;
}