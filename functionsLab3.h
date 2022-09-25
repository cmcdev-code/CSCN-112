#include <vector>
#include <string>

class  Employee
{
    public:
    //set and get member functions 
        void setName(std::string name);
        std::string getName() const;

        void setCity(std::string city);
        std::string getCity() const;

        void setId(std::string id);
        std::string getId() const;

        void setScore(double scores);
        void setScore(double scores, int i);
        
        double getScore(int index) const;

    private://private member variables 
        std::string name;
        std::string city;
        std::string id;
        std::string fileName;

        std::vector<double> scores;

    protected:
        void setfileName(std::string fileName);
        std::string getfileName() const;

};
class userInput: public Employee{//inheritaed class that will handel the user inputs and filer manipultaion

    public:
        std::string fileInputName();
        double scoreIn();







};
