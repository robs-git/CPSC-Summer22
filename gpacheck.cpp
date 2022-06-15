#include <iostream>
#include <fstream>
#include <string> 



using namespace std;
void obtainNamesAndGPAs(ifstream& fin, string Name[], double GPA[], int& count); // added count to the end

void printNamesGPAs(string Name[], double GPA[], int count);
const int SIZE = 200;


int main() {


ifstream fin;
string Name[SIZE];
double GPA[SIZE];
int count; // added count to keep track of number of students in GPA.TXT

fin.open("GPA.txt");

obtainNamesAndGPAs(fin, Name, GPA, count);

printNamesGPAs(Name,GPA,count);


    fin.close();
 

     return 0;
}



void obtainNamesAndGPAs(ifstream& fin, string Name[], double GPA[], int& count) {

int i = 0; //to iterate through do loop

do {
    getline(fin,Name[i]); //get entire line for string name
    fin >> GPA[i]; // get double amount
     i++; //iterate i;


}while(fin.get() != EOF);

count = i - 1; //reduce by 1 as array does 1 loop after last line of file

}



void printNamesGPAs(string Name[], double GPA[], int count) {


    for (int i = 0; i < count; i++) {

        cout << Name[i] << endl;
        cout << GPA[i] << endl;
    }
}

