#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> first;
    first.push_back(11);
    first.push_back(22);
    first.push_back(33);
    first.push_back(44);
    first.push_back(55);

    vector<int> second;
    second.push_back(44);
    second.push_back(55);
    second.push_back(66);
    second.push_back(77);
    second.push_back(88);

    vector<int> result;
    // set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    // for (int a : result)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    // set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    // for (int a : result)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    // set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    // for (int a : result)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    for (int a : result)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}