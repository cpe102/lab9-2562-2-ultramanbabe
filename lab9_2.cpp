//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream dest;
    dest.open("C:\\Users\\acer\\Desktop\\CPE\\ComPro\\lab9-2562-2-ultramanbabe\\cheerbook_copy.txt");
    dest << "-------------------- SOTUS ---------------------\n";
    ifstream source;
    source.open("C:\\Users\\acer\\Desktop\\CPE\\ComPro\\lab9-2562-2-ultramanbabe\\cheerbook.txt");
    string textline;
    while(getline(source, textline)){
        dest << textline << "\n";
    }
    dest << "-------------------- SOTUS ---------------------";
    source.close();
    dest.close();

    return 0;
}