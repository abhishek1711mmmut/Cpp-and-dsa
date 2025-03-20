#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class Student
{
public:
    int marks;
    string name;

    // default constructor
    Student()
    {
    }

    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

class comparator
{
    public:
    bool operator()(Student a, Student b){
        // criteria -> max marks -> high priority (priority queue works little differently, it is a max heap, not mean heap)
        return a.marks < b.marks;
    }
};

int main()
{

    priority_queue<Student, vector<Student>, comparator> pq;

    pq.push(Student(90, "Abhishek"));
    pq.push(Student(85, "Aryan"));
    pq.push(Student(33, "Alok"));
    pq.push(Student(95, "Arun"));

    cout<<pq.top().name<<" "<<pq.top().marks<<endl;
    pq.pop();
    cout<<pq.top().name<<" "<<pq.top().marks<<endl;
    pq.pop();
    cout<<pq.top().name<<" "<<pq.top().marks<<endl;
    pq.pop();
    cout<<pq.top().name<<" "<<pq.top().marks<<endl;
    pq.pop();


    // // max heap
    // priority_queue<int> pq;
    // priority_queue<int, vector<int>, less<int>> pq3;
    // // line no. 10 and 11 are same

    // // min heap
    // priority_queue<int, vector<int>, greater<int>> pq2;
    // // vector<int> is underlying container and greater<int> is comparator


    return 0;
}