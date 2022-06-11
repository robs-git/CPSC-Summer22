

#include <iostream>


using namespace std;


//function declaration
void function(int a, int& b, int& c); //function that takes 3 parameters, using &reference because we want to change the variables in the MAIN function
                                    //refer to https://www.youtube.com/watch?v=HEiPxjVR8CU
                                    //this is a call by reference function



int main()
{

//declaring parameters to be used in the function    
int n, even, odd; 

cout << "enter total number of numbers to check";

cin >> n;

function(n,even,odd); //calling the function, which takes number n and returns even and odd numbers

//returning these in main, to do this we used REFERENCE parameters. be sure to watch video above
cout << "You entered " << even << " even number(s) and " << odd << " odd number(s)"; 
return 0;



}

//function IMPLEMENTATION
void function(int a, int& b, int& c) {

    b = 0; // make sure to declare as 0 or another number as we are iterating these 
    c = 0; // make sure to declare as 0 or another number as we are iterating these 

    int waffle; // declare number variable to take inputs

    
        while (a > 0) {  //note a is is obtained from a in the function as input from main

            cout << "enter odd or even number" << endl;

            cin >> waffle; // taking numbers from user

            if(waffle%2 == 0)
                b++; // b in this case, is storing the even numbers

            else 
                c++; // c in this case, is storing the even numbers
 

            a--; //reducing a in loop

        }





}
