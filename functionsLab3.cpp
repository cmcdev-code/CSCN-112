#include "employee.h"
#include <iomanip> 
#include <string>
#include <algorithm>
#include <iostream>


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
void Employee::sortVector(){
    std::sort(score.begin(),score.end());
}
double Employee::smallestVector(){
    double smallestInvector=vectorAtIndex(0);
    for( int i =0;i<sizeVectorScore();i++){
        if(smallestInvector>vectorAtIndex(i)){
            smallestInvector=vectorAtIndex(i);
        }
    }

return smallestInvector;

}
double Employee::largestVector(){
    double largestInvector=vectorAtIndex(0);
    for( int i =0;i<sizeVectorScore();i++){
        if(largestInvector<vectorAtIndex(i)){
            largestInvector=vectorAtIndex(i);
        }
    }

return largestInvector;

}
void Employee::delVector(){
    this->score.clear();
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


void Employee::printEmployeeInfo() const{
    
    std::cout<<"***************************************"<<'\n';
    std::cout<<std::setw(30)<<std::right<<"Employee Info \n";
    std::cout<<std::setw(20)<<std::left<<"Employee name:"<<std::right<<getName()<<'\n';
    std::cout<<std::setw(20)<<std::left<<"City:"<<std::right<<getCity()<<'\n';
    std::cout<<std::setw(20)<<std::left<<"ID:"<<std::right<<getID()<<'\n';
    std::cout<<"***************************************"<<'\n'<<'\n';
    std::cout<<std::setw(30)<<std::right<<"Customer Satisfaction Info \n";
    for(int i=0;i<sizeVectorScore();i++){
        std::cout<<vectorAtIndex(i)<<'\n';
    }

   
    std::string pause;
    std::cout<<"Type in a single char and hit enter to continue \n";
    std::cin>>pause;
}

