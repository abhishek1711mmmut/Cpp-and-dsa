#include <iostream>
using namespace std;

int dearrangeCount(int n){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;

    return (n-1)* (dearrangeCount(n-1)+dearrangeCount(n-2));
}

int main() 
{
    int n=4;
    cout<< dearrangeCount(n)<< endl;
    return 0;
}