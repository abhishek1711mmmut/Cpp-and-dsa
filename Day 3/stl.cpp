#include <iostream>
#include<algorithm>
#include<list>
#include<queue>
#include<stack>
#include<unordered_map>
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

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    cout<<"\nDeque elements are: ";
    for(auto i:dq){
        cout<<i<<" ";
    }

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"\nQueue elements are: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    unordered_map<string, string> ump;
    ump["in"]="India";
    ump.insert({"us","United States"});
    ump.insert(make_pair("uk","United Kingdom"));
    pair<string, string> p;
    p.first="aus";
    p.second="Australia";
    ump.insert(p);


    return 0;
}