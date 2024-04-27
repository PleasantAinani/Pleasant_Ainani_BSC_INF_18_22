#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //create a file
    ofstream MyFile;
    MyFile.open("c:/Users/PLEASANT AINANI/desktop/exampleFile.txt", ios::out | ios::trunc);

    if (!MyFile.is_open())
    cout<< "the file failed to open !"<< endl;

    MyFile<<"Write to the file...!\n";
    MyFile<<"Write to the file...!\n";
    MyFile<<"well..!\n";
    MyFile<<"hello\n";

    //close the file
    MyFile.close();
    return 0;
}