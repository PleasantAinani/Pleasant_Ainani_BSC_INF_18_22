#include<iostream>
using namespace std;

int main(){
    int col= 4;
    int rows=4;
    double** arr = new double*[rows];

    while(col > 3){
        cout<<"Please enter the number of columns less than 3 :"<<endl;
        cin>>col;
    }

      while(rows> 3){
        cout<<"Please enter the number of rows less than 3 :"<<endl;
        cin>>rows;
    }

    for(int i=0; i<rows;i++){
            arr[i] = new double[col];
        }

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter the double values :"<<endl;
            cin >> arr[i][j];
        }
    }

cout<<"The outputs are :"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    for(int i=0; i<rows;i++){
    delete[] arr[i];
        }
        delete[] arr;

    return 0;
}