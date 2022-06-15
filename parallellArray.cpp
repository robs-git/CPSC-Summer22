// parallell arrays, how to create and sort

//video reference for parallel arrays: https://www.youtube.com/watch?v=DfHn9_LvwcE


#include <iostream>
#include <string>

using namespace std;

void enterScores(int intArray[], string stringArray[], int size);

void sortScores(int intArray[], string stringArray[], int size);

void printScores(int intArray[], string stringArray[], int size);

const int MAX_SIZE = 200; //when updating arrays in functions, e.g., soritng, make sure to create a max size for arrays

int main () {

    int size = 3;
    int score[MAX_SIZE];
    string name[MAX_SIZE];

    enterScores(score,name,size);
    sortScores(score,name,size);
    printScores(score,name,size);

    return 0;

};


void enterScores(int intArray[], string stringArray[], int size) {


    for(int i = 0; i < size; i++) {

        cout << endl << "enter score: ";
        cin >> intArray[i];
        cout << endl << "enter name: ";
        cin >> stringArray[i];
    }


    cout << endl;
}


void sortScores(int intArray[], string stringArray[], int size) {

    int tempScore;
    string tempName;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) 

            if (intArray[i] < intArray[j]) {

                tempScore = intArray[i];
                tempName = stringArray[i];

                intArray[i] = intArray[j];
                stringArray[i] = stringArray[j];

                intArray[j] = tempScore;
                stringArray[j] = tempName;

            }
        
    }


}



void printScores(int intArray[], string stringArray[], int size) {


    for(int i = 0; i < size; i++) {

        cout << " score  " << i << ": " << intArray[i] << endl;
        cout << " name  " << i << ": " << stringArray[i] << endl;
    }

}

