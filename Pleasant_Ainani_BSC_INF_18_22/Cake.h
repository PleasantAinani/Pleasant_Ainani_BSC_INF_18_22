#pragma once
#include "Ingredient.h"
#include <string>
#include <iostream>
using namespace std;

class Cake
{
    static double *ing[5];
    int assignedVariables;

private:
    string AddIngredient();

    string SaveIngredientsToFile();

    string showAllIngredients();

    TypeOfIngredient selectIngredientType();

public:
    void Bake();

    Cake(){};

    ~Cake(){};
};