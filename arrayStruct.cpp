//purpose is to demonstrate how to create a struct, how to create an array of structs, and how to update structs using functions
// video on array of structs: https://www.youtube.com/watch?v=W4dWVpGaQfI

//intro to structs https://www.youtube.com/watch?v=vJ9ezXY7efw
// creating a struct https://www.youtube.com/watch?v=E_aVsBLlvpQ

#include <iostream>
#include <array> //https://en.cppreference.com/w/cpp/container/array

using namespace std;


//creating a structure for food, with 3 parameters
struct food {

    string name;
    double price;
    int quantity;

}; // always remember to add ; for structs


//creating an array that gets user to update food in an array, takes array of struct and size
void updateFood(food array[], int size);

//printing the array of food, takes the array of struct and size
void printFood(food array[], int size);


int main () {

    int arraySize = 3;
    food foodBag[arraySize]; //creating an array of structs with size;

    updateFood(foodBag, arraySize);

    printFood(foodBag, arraySize);



}

//create a function that asks user to input name, weight, and quanity of each food in array
void updateFood(food array[], const int size) {

    for(int i = 0; i < size; i++) {

        cout << "enter food name: " << endl;
        cin >> array[i].name;

        cout << "enter food weight: " << endl;
        cin >> array[i].price;

        cout << "enter food quantity: " << endl;
        cin >> array[i].quantity;

    }

    cout << endl;

}


//create a function that prints entire array of food object
void printFood(food array[], const int size) {

    for(int i = 0; i < size; i++) {

        cout << " food name: " << array[i].name << endl;

        cout << " food weight: " << array[i].price << endl;

        cout << " food quantity: " << array[i].quantity << endl << endl;

    }

    cout << endl;

}


