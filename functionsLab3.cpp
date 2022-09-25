#include "function.h"
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

//set member functions bellow 

void Employee::setName(std::string name){
    this->name = name;
}
void Employee::setCity(std::string city){
    this->city =city;
}
void Employee::setId(std::string id){
    this->id =id;
}
void Employee::setfileName(std::string fileName){
    this->fileName=fileName;
}
void Employee::setScore(double scores){
    this->scores.push_back(scores);
}
void Employee::setScore(double scores, int i){
    this->scores.at(i)=scores;
}

//get member functions
std::string Employee::getName() const{
    return this->name;
}
std::string Employee::getCity() const{
    return this->city;
}
std::string Employee::getId() const{
    return this-> id;
}
std::string Employee::getfileName() const{
    return this-> fileName;
}

//user input functions 
std::string userInput::fileInputName(){
    std::string fileNameLocal="";   
    std::cout<<"What is the name of the file? Please enter the extension example if it is a txt enter name.txt. \n";
    std::getline(std::cin,fileNameLocal);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

return fileNameLocal;
}
double userInput::scoreIn(){
    double localScore=0;
    while(true){
        std::cout<<"What is the score of the user? \n";
        std::cin>>localScore;
        if( localScore>=1 && localScore<=5 && !(std::cin.fail())){
            break;
        }else{
            std::cout<<"Error please enter a number greatr then or equal to 1 and also less then or equal to 5.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    return localScore;
}
void userInput::printEmployeeInfo() const{
    std::cout<<std::setw(60)<<std::setfill('*')<<'\n';
    
    std::cout<<std::setw(60)<<std::left<<"Employee name:"<<std::setfill('-')<<std::right<<getName()<<'\n';
    std::cout<<std::setw(60)<<std::left<<"Employee name:"<<std::setfill('-')<<std::right<<getName()<<'\n';


}
// void room::showData(double gallonsNeeded,double surface_area) const{
//     std::cout<<std::setw(60)<<std::left<<"The number of gallons of paint needed for this room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(3)<<std::right<<gallonsNeeded<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The number of gallons of paint needed in total is:"<<std::setfill('-')<<std::fixed<<std::setprecision(3)<<std::right<<getPaintNeeded()<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The height of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getHeight()<<'m'<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The width of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getWidth()<<'m'<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The length of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getLength()<<'m'<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The volume of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<getVolume()<<"m^3"<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The paintable surface area of the room is:"<<std::setfill('-')<<std::fixed<<std::setprecision(2)<<std::right<<surface_area<<"m^2"<<"\n";
//     std::cout<<std::setw(60)<<std::left<<"The number of rooms painted is:"<<std::setfill('-')<<std::right<<getNumberOfRoomsPainted()<<"\n";
// }
