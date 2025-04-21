#include <iostream>
using namespace std;

int main()
{
    // string sentence;
    // cout << "Enter sentence:" << endl;
    // getline(cin, sentence, '\n');        // cin.getline() is used in char array.
    // cout << sentence << endl;

    // string str1="Abhishek";
    // string str2="kumar";
    // string name=str1+" "+str2;
    // cout<<name<<endl;
    // name.clear();
    // cout<<"printing name after clear: "+name<<endl;

    string sentence="My name is Abhishek";
    string word="enam";
    cout<<string::npos<<" "<<sentence.find(word)<<endl;

    cout<<sentence.substr(3, 4)<<endl;  // position, no. of characters

    string s1="oye";
    string s2="oye2";
    cout<<s1.compare(s2)<<endl; // return 0 if same, else -1 if lexicographicallly smaller or +1 lexicographicallly greater


    return 0;
}