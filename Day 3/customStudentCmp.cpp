#include <iostream>
#include <algorithm>
#include <vector>
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
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.name < b.name;
        }
        return a.marks > b.marks;
    }
};

int main()
{
    vector<Student> arr;
    arr.push_back(Student(85, "Aryan"));
    arr.push_back(Student(85, "Abhishek"));
    arr.push_back(Student(85, "Arun"));

    sort(arr.begin(), arr.end(), comparator());

    for (Student s : arr)
    {
        cout << s.name << " " << s.marks << endl;
    }
    cout << endl;
    return 0;
}