#include "declerations.h"
#include <iostream>

int main(){
    
    room user;

    while(user.getWantsRoomsPainted())//will keep looping till they enter -1
    {
    user.setAndCallUserInput();
    }

    return 0;
}