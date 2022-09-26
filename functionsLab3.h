#include <vector>
#include <string>

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
    double smallestVector();


private:
    std::string name;
    std::string city;
    std::string ID;
    std::vector<double> score;

};
