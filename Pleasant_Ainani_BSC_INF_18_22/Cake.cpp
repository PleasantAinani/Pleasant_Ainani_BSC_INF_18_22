#include "ingredient.h"
#include "Cake.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

 string Cake::AddIngredient(){
     
    cout<<"select ingredient type :"<<endl;
    Ingredient::ingredientType.selectIngredientType();

 }

 TypeOfIngredient Cake::selectIngredientType(){
    cout<<"Type of ingredient options :"<<endl;
    cout << "1- Flour" << endl;
    cout << "2- egg" << endl;
    cout << "3- Sugar" << endl;
    cout << "4- Salt" << endl;
    cout << "5- BackingPowder" << endl;
    cout << "6- Milk" << endl;
    cout << "Please select an ingredient" << endl;
    cin>>Ingredient::ingredientType;

 }
 string Cake::SaveIngredientsToFile(){
    string ingredient;
    ifstream line("Cake.txt");

    if (line.is_open())
    {
        while (getline(line, ingredient))
            line >> ingredient;
    }
}

 string Cake::showAllIngredients()
 {
     // string Ingredient::ingredientName();
 }

void Cake::Bake(){
    int option = 0;
    do{
        cout<<"Options"<<endl;
        cout << "1- Add an ingredient." << endl;
        cout << "2- Show all added ingredients." << endl;
        cout << "3- Save ingredients to file" << endl;
        cout << "4- Quit." << endl;
        cout << "What would you like to do?" << endl;
        cin>>option;

    if(option>4)
     cout<<"Invalid option, please try again!"<<endl;

    }
    while(option != 4);
}
