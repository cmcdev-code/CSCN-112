#include "declerations.h"
#include <cmath>
#include <iostream>


using namespace decleration;
using namespace std;

//*******************************************
//Function Declerations

//Function that outputs the txt to the terminal 

//pow is method that is in the cmath libary that is the same as raising something to a power
double debtor::numberInFunction(int year, float intrest){
    return pow((1+intrest/12),(year*12));
}


//Function that returns the monthly payment
float debtor::amortizationCalc(double principle,float intrest,int year)
{
    float commonThing=numberInFunction(year,intrest);

    return principle * ((intrest * commonThing)/(commonThing-1));
}

//Functions that set the private variables for the functions
    void debtor::setLoanOption(int& loanOption){
        this-> loanOption = loanOption; 
    }
    
    int debtor::getLoanOption(){
        return loanOption;
    }

     void debtor::setLoanAmmount(double& loanAmmount){
        this ->loanAmmount = loanAmmount;    
    }
    double debtor::getLoanAmmount(){
        return loanAmmount;
    }

    void debtor::setYearlyIntrest(double& yearlyIntrest){
       this -> yearlyIntrest=yearlyIntrest;
    }
    double debtor::getYearlyIntrest(){
        return yearlyIntrest;
    }
    void debtor::print(std::string s){
        std::cout<<s;
        
    }


//*******************************************
