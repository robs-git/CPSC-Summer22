#include <iostream>
#include <string>
#include <cctype>


using namespace std;

int main () {

    string a;


    a = "hello this is a string";

    cout << a << endl;

    cout << "length of string: " << a.length() << endl;

    cout << "find hello in string: " << a.find("hello")<< endl;

    cout << "find string in string: " << a.find("string")<< endl;

    cout << "string at character 0: " << a[0]<< endl;



    string code;

    cout << "enter 3 digit code " << endl;
    getline(cin,code); //takes code from uder input

    cout << "code before changing %: " << code << endl;

    cout << "code at 0 : " << code[0] << endl;
    cout << "code at 1 : " << code[1] << endl;

    // checks the first character (at position 0) and second character (at position 1)
    for (int i = 0; i < 2; i++) {
        if (isalpha(code[i]))
            code[i] = '%';

    }


    cout << "code after changing %: " << code; 


}