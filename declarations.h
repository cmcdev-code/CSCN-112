#include <iostream>

//Setting the different loan options
const int tenYear(10), fifteenYear(15),thirtyYear(30);
/*Found how to define namespace here 
https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-170
*/
namespace decleration{

class debtor
{
    public:
    //private:
    
        //The Option that the person chose
        int loanOption;

        //The loan ammount
        double loanAmmount;

        //The Yearly intrest
        double yearlyIntrest;


        
   public:

        //Constructor to initilize the memory when creating an object of the class 
        debtor()
            {
                loanOption = 10;//Loan Option can't == 0 because then the amortization formula would be dividing by 0  
                loanAmmount = 0.0f;
                yearlyIntrest = 0.0f;
            }
        void print(std::string s);


        void setLoanOption(int& loanOption);
        int getLoanOption();

        void setLoanAmmount(double& loanAmmount);
        double getLoanAmmount();


        void setYearlyIntrest(double& yearlyIntrest);
        double getYearlyIntrest();

        

        //Function that asks for which year loan they want and returns that option
        int loanOptFunc();

        //Function that will print out the different loan options
        void toTerminal(int one,int two, int three);

        //Function that will calc the number of intrest Thing
        double numberInFunction(int year, float intrest);

        //Function that will calc the Monthly payment
        float amortizationCalc(double principle,float intrest,int year);


};
}
