#include "employee.h"
#include <iomanip> 
#include <string>

void Employee::setName(std::string name){
    this-> name=name;
}
void Employee::setCity(std::string city){
    this-> city=city;
}
void Employee::setID(std::string ID){
    this->ID=ID;
}
int Employee::sizeVectorScore() const{
    return this->score.size();
}
void Employee::vectorPushBack(double score){
    this->score.push_back(score);
}
double Employee::vectorAtIndex(int index) const{
    return this->score.at(index);
}



Employee::Employee(){
    name="";
    city="";
    ID="";
}




Employee::Employee(std::string name,std::string city,std::string ID){
    this->name=name;
    this->city=city;
    this->ID=ID;
}
std::string Employee::getName() const{
    return this-> name;
}
std::string Employee::getCity() const{
    return this-> city;
}
std::string Employee::getID() const{
    return this->ID;
}











