#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //create a file
    ifstream MyFile;
    string line;
    MyFile.open("c:/Users/PLEASANT AINANI/desktop/exampleFile.txt");

    if (MyFile.is_open()){
        while (getline(MyFile,line))
        {
          cout<< line<< '\n';
        }
        MyFile.close();
        
    } else
    {
        cout << "unable to open file";
    }
    return 0;
}
    