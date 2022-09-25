#include "function.h"
#include <string>
#include <fstream>
#include <iostream>

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


