#include <iostream>


//declaring the function that returns an int value and takes 1 parameter (int x)
int tuition(int waffle);


using namespace std;


int main () {


cout << "tution for this program is: " << tuition(1) << endl;
cout << "tution for this program is: " << tuition(2) << endl;
cout << "tution for this program is: " << tuition(3) << endl;
cout << "tution for this program is: " << tuition(4) << endl;


}

//function implementation
int tuition(int waffle) {

switch (waffle) {

    case 1:
    return 2000;
    break;

    case 2:
    return 1000;
    break;

    case 3:
    return 4000;
    break;

    default:
    return 0;
    break;

}



}