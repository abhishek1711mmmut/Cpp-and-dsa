#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int x)
{
    cout << x * 2 << " ";
}

bool checkEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    // vector<int> arr(5);
    // arr[0]=11;
    // arr[1]=20;
    // arr[2]=30;
    // arr[3]=40;
    // arr[4]=50;

    // for_each(arr.begin(), arr.end(), printDouble);
    // cout<<endl;

    // auto it=find_if(arr.begin(), arr.end(), checkEven);
    // cout<<"First even element is: "<<*it<<endl;

    vector<int> arr2(5);
    arr2[0] = 10;
    arr2[1] = 10;
    arr2[2] = 20;
    arr2[3] = 20;
    arr2[4] = 30;
    arr2[5] = 30;

    auto it = unique(arr2.begin(), arr2.end());
    // iterator it ke phle ke saare elements unique hai
    // it ke baad ke elements duplicate hai
    arr2.erase(it, arr2.end());
    for (auto x : arr2)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}