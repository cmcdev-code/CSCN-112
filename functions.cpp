#include "declerations.h"
#include <iostream>
#include <iomanip>
// Collin McDevitt initializing variables and creating function definitions for the class room


//ammount of surface area one gallon of paint can cover 
int const paint=400;

//constructor
room::room() {
        length=0.0f;//initializing the variable to 0.0
        width=0.0f;//initializing the variable to 0.0
        height=0.0f;//initializing the variable to 0.0
        volume=0.0f;//initializing the variable to 0.0
        paintNeeded=0.0f;//initializing the variable to 0.0
        wantsRoomsPainted=true;//initializing the bool variable 
    }

//Set methods  
void room::setLength(double length){
    this-> length=length;//takes in the length as a paramter and will set it to the member variable 
}
void room::setWidth(double width){
    this-> width= width;//takes in the width as a paramter and will set it to the member variable
}
void room::setHeight(double height){
    this-> height = height;//takes in the height as a paramter and will set it to the member variable 
}
void room::setVolume(){
    this-> volume = height*length*width;//will set the volume and calculate it
}
void room::setWantsRoomsPainted(bool wantsRoomsPainted){
    this-> wantsRoomsPainted=wantsRoomsPainted;//will take in a bool and set it to the member variable 
}
void room::setPaintNeeded(double paintNeeded){
    this->paintNeeded = paintNeeded;//will take in the ammount of paint needed and store it in the member variable 
}

//Get methods 
double room::getLength() const{
    return length;//will return the length
}
double room::getWidth() const{
    return width;//will return the width
}
double room::getHeight() const{
    return height;//will return the height 
}
double room::getVolume() const{
    return volume;//will return the volume 
}
bool room::getWantsRoomsPainted() const{
    return wantsRoomsPainted;//will return wheather they want the rooms painted 
}
double room::getPaintNeeded() const{
    return paintNeeded;//will retunr the ammount of paint needed for all the rooms 
}

//Function that will ask for the user input for the length
double room::inputFromUserLength(){
        double inLength=getLength();//initializing variables 
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the length of the room that is being painted?\n";
                std::cin>>inLength;//asking the user inputs 
                    if(((inLength==-1)||inLength>=1) && (inLength<10000)&& !(std::cin.fail())){//checks that input is the correct value and not in a fail state 
                        if(inLength==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inLength=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//while break out of the loop
                    }else{//if they have entered a number other then the type or a letter then it will clear stream and ask again
                        std::cout<<"Error please enter a valid input in the range from 1 to 10000. \n \n ";
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
        double inWidth=getWidth();
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the width of the room that is being painted?\n ";
                std::cin>>inWidth;//asking the user inputs 
                    if((inWidth==-1)||(inWidth>=1) && (inWidth<100000) &&  !(std::cin.fail()) ){//checks that input is the correct value and not in a fail state 
                        if(inWidth==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inWidth=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//will break out of the loop
                    }else{
                        std::cout<<"Error please enter a valid input in the range from 1 to 10000. \n \n ";
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
        double inHeight=getHeight();
        while(true){
            if(getWantsRoomsPainted()){//if getWantsRoomsPainted is true then it will 
                std::cout<<"What is the height of the room that is being painted?\n ";
                std::cin>>inHeight;//asking the user inputs 
                    if((inHeight==-1)||(inHeight>=1) && (inHeight<100000) &&  !(std::cin.fail()) ){//checks that input is the correct value and not in a fail state 
                        if(inHeight==-1){//checks if the user entered a -1 if so then it will break out of the loop
                            setWantsRoomsPainted(false);
                            inHeight=0.0f;//don't want to store the -1 so will set it = to 0 instead 
                        }
                        break;//will break out of the loop
                    }else{
                        std::cout<<"Error please enter a valid input in the range from 1 to 10000. \n \n ";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        }
            }
        }
        std::cin.clear();//clearing stream before returning
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return inHeight;
    }

//method that will call the user inputs and will loop 
void room::setAndCallUserInput(){
    
    int numberOfRooms=0;//local variable to keep track of the number of rooms that will be painted 
        std::cout<<"Press -1 at any time to exit.\n";
        numberOfRooms++;
            
            //Creating local variables 
            double length = getLength();
            double width = getWidth();
            double height = getHeight();
            double gallonsNeeded = 0.0f;
            double surface_area= 0.0f;

            if(getWantsRoomsPainted()){//checks wheather the bool value if false then it won't ask again for the user input
                length = (inputFromUserLength());}
                setLength(length);//sets length to user input 

            if(getWantsRoomsPainted()){//checks wheather the bool value if false then it won't ask again for the user input
                width = (inputFromUserWidth());}
                setWidth(width);//sets width to user input 

            if(getWantsRoomsPainted()){//checks wheather the bool value if false then it won't ask again for the user input
                height = (inputFromUserHeight());}
                setHeight(height);//sets height to user input 

            if(!getWantsRoomsPainted()){//if the bool is false then it will get the previous length, width, and height. 
                setWidth(0.0f);
                setLength(0.0f);
                setHeight(0.0f);
                gallonsNeeded=0.0f;
                height=0.0f;
                length=0.0f;
                width=0.0f;
            }

            surface_area = 2*(width*height) +2*(length*height);
            setVolume();
            gallonsNeeded=surface_area/paint;//calculates the number of gallons needed 
            setPaintNeeded(getPaintNeeded()+gallonsNeeded);//sets the ammount of paint needed to the previous ammount + that instance of the rooms ammount 
            
            if(getWantsRoomsPainted()){
            showData(gallonsNeeded,numberOfRooms,surface_area);//calls the method that will print the number of rooms that need paint 
            }
   
}

//method that will output the data 
void room::showData(double gallonsNeeded,int numberOfRoomsPainted,double surface_area) const{
    std::cout<<std::setw(60)<<std::left<<"The number of gallons of paint needed for this room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(3)<<std::right<<gallonsNeeded<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The number of gallons of paint needed in total is:"<<std::setfill('-')<<std::fixed<<std::setprecision(3)<<std::right<<getPaintNeeded()<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The height of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getHeight()<<'m'<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The width of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getWidth()<<'m'<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The length of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getLength()<<'m'<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The volume of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getVolume()<<"m^3"<<"\n";
    std::cout<<std::setw(60)<<std::left<<"The paintable surface area of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<surface_area<<"m^2"<<"\n";
}