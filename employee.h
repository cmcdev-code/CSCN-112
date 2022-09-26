 #include <vector>
#include <string>
#pragma once

class Employee{

    public:
    void setName(std::string  name);
    std::string getName() const;

    void setCity(std::string city);
    std::string getCity() const;

    void setID(std::string ID);
    std::string getID() const;

    Employee();    
    Employee(std::string name,std::string city,std::string ID);

    void vectorPushBack(double score);
    double vectorAtIndex(int index) const;
    int sizeVectorScore() const;
    void sortVector();
    double smallestVector() const;
    double largestVector() const;
    double avgVector() const;
    void delVector();

    void printEmployeeInfo() const;



private:
    std::string name;
    std::string city;
    std::string ID;
    std::vector<double> score;

};
