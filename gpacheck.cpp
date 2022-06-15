#include <iostream>
#include <fstream>
#include <string> 



using namespace std;
void obtainNamesAndGPAs(ifstream& fin, string Name[], double GPA[]);
const int SIZE = 200;


int main(){
ifstream fin;
fin.open("GPA.txt");
string Name [SIZE];
double GPA [SIZE];
obtainNamesAndGPAs(fin, Name, GPA);



    return 0;
}



void obtainNamesAndGPAs(ifstream& fin, string Name[], double GPA[]) {
int i = 0;

getline(fin, Name[i]);
fin >> GPA[i];
while (!fin.eof()){
    i++;
getline(fin, Name[i]);
fin >> GPA[i];

}

cout << i;
}