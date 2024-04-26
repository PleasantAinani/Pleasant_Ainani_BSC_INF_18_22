#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countVowels(string &fileData);
int countWords(string &fileData);
string reverse(const string& text);
string capitalize(string &fileData);

int main(){

string fileData;
ifstream line;
line.open("files/file.txt");

if(line.is_open()){
    while(getline(line,fileData))
    line>>fileData;
  cout<<fileData<<endl;   

    //outputs the number of vowels 
    cout << countVowels(fileData)<< endl;

    //outputs the number of words
    cout<<fileData<<endl;

    //outputs the 
}
    else{
    cout<<"unable to open file!"<<endl;
}
    line.close();
    return 0;
}

int countVowels(string &fileData){
    int vowels = 0;
    for(char ch: fileData){
        ch = tolower(ch);
        if(ch =='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            ++vowels;
            }
        }
        return vowels;
}

int countWords(string &fileData){

    return 0;
}

string reverse(const string& text) {
    string rev = text;
    reverse(rev.begin(), rev.end());
    return rev;
}

string capitalize(string &fileData){
    string result;
    bool cap=false;

    for(char ch: fileData){
        if(ch==' '){
            cap = false;
            result+= ch;
        }
        else{
            result+= cap ? toupper(ch) :ch;
            cap =!cap;
            }
        }
        return result;
    }