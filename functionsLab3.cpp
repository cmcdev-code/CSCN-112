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
double Employee::smallestVector() const{
    double smallestInvector=vectorAtIndex(0);
    for( int i =0;i<sizeVectorScore();i++){
        if(smallestInvector>vectorAtIndex(i)){
            smallestInvector=vectorAtIndex(i);
        }
    }

return smallestInvector;

}
double Employee::largestVector() const{
    double largestInvector=vectorAtIndex(0);
    for( int i =0;i<sizeVectorScore();i++){
        if(largestInvector<vectorAtIndex(i)){
            largestInvector=vectorAtIndex(i);
        }
    }

return largestInvector;

}


    // for(int i=0;i<sizeVectorScore();i++){
    //     std::cout<<vectorAtIndex(i)<<'\n';
    // }



double Employee::avgVector() const{
    double avg=0;
    for(int i=0;i<sizeVectorScore();i++){
        avg=avg+vectorAtIndex(i);

    }if(sizeVectorScore()>0){
    avg= avg/sizeVectorScore();
    }
    else{
        avg=0;
    }
    return avg;

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

    
    
    if(sizeVectorScore()>1){
    std::cout<<std::fixed<<std::setprecision(1)<<std::setw(20)<<std::left<<"Average Score:"<<std::right<<avgVector()<<'\n';
    std::cout<<std::fixed<<std::setprecision(1)<<std::setw(20)<<std::left<<"Highest Score:"<<std::right<<largestVector()<<'\n';
    std::cout<<std::fixed<<std::setprecision(1)<<std::setw(20)<<std::left<<"Lowest score:"<<std::right<<smallestVector()<<'\n';
    std::cout<<"List of all recorded scores: \n";

    
    for(int i=0;i<sizeVectorScore();i++){
        std::cout<<vectorAtIndex(i)<<'\n';
        }
    }
    else{
        std::cout<<std::fixed<<std::setprecision(1)<<std::setw(20)<<std::left<<"Highest Score:"<<std::right<<0<<'\n';
        std::cout<<std::fixed<<std::setprecision(1)<<std::setw(20)<<std::left<<"Lowest score:"<<std::right<<0<<'\n';
        std::cout<<"List of all recorded scores: \n";
    }



    std::cout<<std::setw(26)<<std::left<<"End of information for:"<<std::right<<getName()<<"\n";
   
    std::cin.ignore();
}

