#include <iostream>
#include "employee.h"

using namespace std;


int main(){
    Employee Collin("Collin","reading","1212");
    Collin.vectorPushBack(1);
Collin.vectorPushBack(-1);
Collin.vectorPushBack(11);
Collin.vectorPushBack(11);
Collin.vectorPushBack(12);
Collin.vectorPushBack(11);
std::cout<<Collin.smallestVector();

    return 0;
}



