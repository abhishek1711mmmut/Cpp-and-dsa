#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int> myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    cout<<"List elements are: ";
    for(auto i:myList){
        cout<<i<<" ";
    }

    // printing list element through iterator
    list<int>::iterator it=myList.begin();
    cout<<"\nList elements(by iterator method) are: ";
    while(it!=myList.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;

    myList.push_back(4);
    myList.push_front(4);
    list<int>::iterator it2=myList.begin();
    while(it2!=myList.end()){
        cout<<*it2<<" ";
        it2++;
    }cout<<endl;

    myList.remove(4);
    list<int>::iterator it3=myList.begin();
    while(it3!=myList.end()){
        cout<<*it3<<" ";
        it3++;
    }
}