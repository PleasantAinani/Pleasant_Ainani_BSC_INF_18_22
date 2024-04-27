#include<algorithm>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countVowels(string &fileData);
string reverseString(const string& text);
string capitalize(string &fileData);

int main(){

string fileData;
ifstream line("file.txt");

if(line.is_open()){
    while(getline(line,fileData))
    line>>fileData;

  cout<<fileData<<endl;   

    //outputs the number of vowels 
    cout <<"Number of vowels:"<< countVowels(fileData)<< endl;

    //outputs the sentence in reverse
    cout <<"The sentence in reverse :"<<reverseString(fileData)<<endl;

    //capitalizing the sentence's every second char in a word 
    cout<<"Capitalizing every second letter in the sentence :"<<capitalize(fileData)<<endl;
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

string reverseString(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
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
            result += cap ? toupper(ch) :ch;
            cap =!cap;
            }
        }
        return result;
    }