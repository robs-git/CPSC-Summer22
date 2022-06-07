#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x = 3, y = 100, result;

    // A
    //5y^2 - 2y


    // 5y
    5*y;


    // 5y^2
    cout << "5y^2: " << pow((5*y),2) << endl;

    // 2y
    2*y;

    cout << "5y^2 - 2y: " << pow((5*y),2) - 2*y << endl;

    // B
    // 6.8 ^ 5.0

    cout << "6.8 ^ 5.0 " << pow(6.8, 5.0);


    // C
    // *  $`\sqrt{5x - 3xy}`$

    // 5x - 3xy

    cout << " 5*x - 3*x*y: " << 5*x - 3*x*y << endl;

    cout << "sqrt(5*x - 3*x*y)" << sqrt(5*x - 3*x*y) << endl;


    //D skip

    //E |3x^2-2y|

    // 3x^2-2y

    cout << "3x^2-2y: " << (pow(3*x,2) - 2*y) << endl;

    // |3x^2-2y|

    cout << "|3x^2-2y|: " << abs(pow(3*x,2) - 2*y) << endl;


    
    return 0; 

}