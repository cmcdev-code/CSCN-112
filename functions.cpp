#include "declerations.h"
#include <cmath>
#include <iostream>

using namespace std;
using namespace decleration;

//*******************************************
//Function Declerations

int loanOptFunc(){
    
    int x(0);
    cin>>x;
    while( x!=10 || x!=15 || x!=30){
        std::cout<<"Error You have entered a year that is not an option. /n";
        std::cin.ignore(9999, '\n');
        cin>>x;
    }
    if (x==10){
        return 10; 
    }
    else if (x==15){
        return 15;
    }
    else if (x==30){
        return 30;
    }
}

//Function that outputs the txt to the terminal 
//void toTerminal(int one,int two, int three){   
//}

//pow is method that is in the cmath libary that is the same as raising something to a power
double numberInFunction(int year, float intrest){
    return pow((1+intrest/12),(year*12));
}


//Function that returns the monthly payment
float amortizationCalc(double principle,float intrest,int year)
{
    float commonThing=numberInFunction(year,intrest);

    return principle * ((intrest * commonThing)/(commonThing-1));
}

//Functions that set the private variables for the functions
    void debtor::setLoanOption(int& loanOption){
        this -> loanOption = loanOption; 
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
    


//*******************************************
