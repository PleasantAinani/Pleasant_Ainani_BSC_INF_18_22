#include "Son.h"
#include "Mother.h"
#include <iostream>
using namespace std;

Son::Son(int a) : Mother(a)
{
    cout << "Son: int parameter\n\n";
}