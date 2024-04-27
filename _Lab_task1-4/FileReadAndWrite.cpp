#include<fstream>
#include<iostream>

using namespace std;

int main(){
    char data[100];

    ofstream outfile;
    outfile.open("afile.txt");

    cout<<"writing to a file"<<endl;
    cout<<"enter your name :";
    cin.getline(data,100);

    outfile<<data<<endl;

    cout<<"enter your age :";
    cin>>data<<endl;
    cin.ignore();

    outfile<<data<<endl;

    outfile.close();

    ifstreamkk
}