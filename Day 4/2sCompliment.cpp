#include <iostream>
#include <vector>
using namespace std;

vector<int> twosCompliment(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);

    // 1 flipping the bit
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] == 0 ? arr[i] = 1 : arr[i] = 0;
    }

    // 2 adding 1
    int carry = 1; // carry set to 1 for the easy of adding 1

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int sum = arr[i] + carry;
        int digit = sum % 2;
        carry = sum / 2;
        ans[i] = digit;
    }

    return ans;
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0, 0, 1, 1};
    vector<int> ans = twosCompliment(arr);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}