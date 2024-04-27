#include <iostream>
#include <string>
using namespace std;

int main(){
    string n[8] ={"B123","C234","A345","C15","B177","G3003","C235","B179"};

    //to output any value containing B
    for(int i=0; i < 8; i++){
        if( n[i].find('B') != std::string::npos){
            cout<<n[i]<<endl;
       }
    }
    /*output the array in reverse
        for(int i=7; i>=0; i--){
        cout<< n[i] <<endl;}*/
    
    return 0;
    }
