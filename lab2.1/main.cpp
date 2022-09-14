#include "declerations.h"
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main(){
    
    room Collin;
    

    Collin.setAndCallUserInput();
    Collin.printVector();
    std::cout<<Collin.length.size();
    std::cout<<Collin.width.size();
    std::cout<<Collin.height.size();

    return 0;
}