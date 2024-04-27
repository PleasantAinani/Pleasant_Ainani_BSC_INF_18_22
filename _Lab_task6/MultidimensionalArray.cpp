#include<iostream>
using namespace std;

int main(){
/*declaration of variables and a pointer*/
    int col= 4;
    int rows=4;
    double** arr = new double*[rows];

/*validation of user input*/
    while(col > 3){
        cout<<"Please enter the number of columns less than 3 :"<<endl;
        cin>>col;
    }

      while(rows> 3){
        cout<<"Please enter the number of rows less than 3 :"<<endl;
        cin>>rows;
    }

/*random memory allocation*/
    for(int i=0; i<rows;i++){
            arr[i] = new double[col];
        }

/*requesting user input*/
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter the double values :"<<endl;
            cin >> arr[i][j];
        }
    }

/*outputs the user input*/
cout<<"The outputs are :"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

/*deallocates array members' memory and deletes pointer arr*/
    for(int i=0; i<rows;i++){
    delete[] arr[i];
        }
        delete[] arr;

    return 0;
}