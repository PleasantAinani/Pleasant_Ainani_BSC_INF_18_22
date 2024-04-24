#include <iostream>
#include <fstream>
using namespace std;

int main(){
string line;
ifstream infile;
infile.open("file.txt");
infile >> line;

cout << line<< endl;
    return 0;
}
