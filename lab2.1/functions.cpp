#include "declerations.h"
#include <iostream>


int const paint=400;

//constructor
room::room() {
        
        length.push_back(0.0f);
        width.push_back(0.0f);
        height.push_back(0.0f);
        volume.push_back(0.0f);
        numberOfRooms = 1;
        paintNeeded=0.0f;
        wantsRoomsPainted=true;
    }
//vector size methods 
/*
void room::vectorReserveALl(){
    length.resize(getNumberOfRooms());
    width.resize(getNumberOfRooms());
    height.resize(getNumberOfRooms());
    volume.resize(getNumberOfRooms());
}*/
//Set methods   

void room::setNumberOfRooms(int numberOfRooms){
    this-> numberOfRooms=numberOfRooms;
}
void room::setLength(double length){
    this-> length.push_back(length);
}
void room::setWidth(double width){
    this-> width.push_back(width);
}
void room::setHeight(double height){
    this-> height.push_back(height);
}
void room::setVolume(double volume, int index){
    this-> volume.push_back(height.at(index) * length.at(index) * width.at(index));
}
void room::setWantsRoomsPainted(bool wantsRoomsPainted){
    this-> wantsRoomsPainted=wantsRoomsPainted;
}
void room::setPaintNeeded(double paintNeeded){
    this->paintNeeded = paintNeeded;
}
//Get methods 
int room::getNumberOfRooms() const{
    return numberOfRooms;
}
double room::getLength(int index) const{
    return length.at(index);
}
double room::getWidth(int index) const{
    return width.at(index);
}
double room::getHeight(int index) const{
    return height.at(index);
}
double room::getVolume(int index) const{
    return volume.at(index);
}
bool room::getWantsRoomsPainted() const{
    return wantsRoomsPainted;
}
double room::getPaintNeeded() const{
    return paintNeeded;
}
//Function that will ask for the user input for the length
double room::inputFromUserLength(){
        double inLength=0.0f;//initializing variables 
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the length of the room that is being painted?\n";
                std::cin>>inLength;//asking the user inputs 
                    if(((inLength==-1)||inLength>=5) && (inLength<10000)&& !(std::cin.fail())){//checks that input is the correct value and not in a fail state 
                        if(inLength==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inLength=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//will break out of the loop
                    }else{//if they have entered a number other then the type or a letter then it will clear stream and ask again
                        std::cout<<"Error please enter a valid input in the range from 5 to 10000. \n \n ";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        }
                }
            }
        std::cin.clear();//clearing stream before returning
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return inLength;
    }

//Function that will ask for the user input for the width
double room::inputFromUserWidth(){
        double inWidth=0.0f;
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the width of the room that is being painted?\n ";
                std::cin>>inWidth;//asking the user inputs 
                    if((inWidth==-1)||(inWidth>5) && (inWidth<100000) &&  !(std::cin.fail()) ){//checks that input is the correct value and not in a fail state 
                        if(inWidth==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inWidth=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//will break out of the loop
                    }else{
                        std::cout<<"Error please enter a valid input in the range from 5 to 10000. \n \n ";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        }
            }
        }
        std::cin.clear();//clearing stream before returning
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return inWidth;
    }

//Function that will ask for the user input for the height
double room::inputFromUserHeight(){
        double inHeight=0.0f;
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the width of the room that is being painted?\n ";
                std::cin>>inHeight;//asking the user inputs 
                    if((inHeight==-1)||(inHeight>5) && (inHeight<100000) &&  !(std::cin.fail()) ){//checks that input is the correct value and not in a fail state 
                        if(inHeight==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inHeight=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//will break out of the loop
                    }else{
                        std::cout<<"Error please enter a valid input in the range from 5 to 10000. \n \n ";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        }
            }
        }
        std::cin.clear();//clearing stream before returning
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return inHeight;
    }

void room::setAndCallUserInput(){
    while(getWantsRoomsPainted()){
        std::cout<<"Press -1 at any time to exit .\n";
            //vectorReserveALl();

            //Creating local variables 
            double localHeight=0.0f;
            double localWidth=0.0f;
            double localLength=0.0f;

            if(getWantsRoomsPainted()){
                localLength = (inputFromUserLength());}

            if(getWantsRoomsPainted()){
                localWidth = (inputFromUserWidth());}

            if(getWantsRoomsPainted()){
                localHeight = (inputFromUserHeight());}
            
            if(!getWantsRoomsPainted()){
                localHeight=0.0f;
                localWidth=0.0f;
                localLength=0.0f;
            }
            double surface_area = 2*(getWidth(numberOfRooms)*getHeight(numberOfRooms)) +2*(getLength(numberOfRooms)*getHeight(numberOfRooms));
            double gallonsNeeded=surface_area/paint;
            setLength(localLength);
            setWidth(localWidth);
            setHeight(localHeight);
            std::cout<<"The number of gallons needed is "<<gallonsNeeded<<". \n";
            std::cout<<"The number of rooms that will be painted is "<<numberOfRooms<<"\n";
            std::cout<<"Press any key other then -1 to confirm. \n \n";
            std::cout<< getHeight(numberOfRooms) << "  " << getWidth(numberOfRooms) << "  " << getLength(numberOfRooms) << "\n";
            numberOfRooms++;
        }
    }
void room::printVector() const{
    std::cout<<"The elements in the length are \n";
    for(int x=0;x<length.size();x++){
        std::cout<<length.at(x)<<"  ";
    }
    std::cout<<"The elements in the width are \n";
    for(int x2=0;x2<width.size();x2++){
        std::cout<<width.at(x2)<<"  ";
    }
    std::cout<<"The elements in the height are \n";
    for(int x3=0; x3<height.size();x3++){
        std::cout<<height.at(x3)<<" ";
    }
}