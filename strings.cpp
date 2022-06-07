#include <iostream>
#include <string>


using namespace std;

int main () {

    string a;


    a = "hello this is a string";

    cout << a << endl;

    cout << "length of string: " << a.length() << endl;

    cout << "find hello in string: " << a.find("hello")<< endl;

    cout << "find string in string: " << a.find("string")<< endl;

    cout << "string at character 0: " << a[0]<< endl;

}