#include "declerations.h"
#include <cmath>
#include <iostream>



using namespace std;

//*******************************************
//Function Declerations

//method that will take in input and error check it 
double debtor::inOfPrincipalAmmount(){
    double input_of_principal=0;
    bool validInput=false;//bool so that there can be error checking
    while(!validInput){
        cout<<"How much money will you be borrowing as a number not words?\n";
        cin>>input_of_principal;
        if((input_of_principal > 1) && (input_of_principal < 100000000) && !(cin.fail())){//input has to be between 1 and 100,000,000(seems like a reasonable price to pay for painting!)
            validInput=true;//while loop will exit 
            }
        else{
            cin.clear();
            validInput=false;//Already is false if this case happens, but will make it clear that this is an error to anyone reading the source code.
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error please enter how much the loan will be for.";
            }
        }
    return input_of_principal;
}
//Method that will ask for the yearly intrest and return the number also will do error checking
double debtor::inYearlyIntrest(){
    double input_of_yearly_intrest=0;
    bool validInput=false;//bool so that there can be error checking
    while(!validInput){
        cout<<"What will the intrest be on the loan?\n";
        cin>>input_of_yearly_intrest;
        if((input_of_yearly_intrest > 0.1) && (input_of_yearly_intrest < 391) && !(cin.fail())){//input has to be between 0.1 and 391% https://www.nerdwallet.com/article/loans/personal-loans/what-is-predatory-lending
            validInput=true;//while loop will exit 
            }
        else{
            cin.clear();
            validInput=false;//Already is false if this case happens, but will make it clear that this is an error to anyone reading the source code.
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error please enter how much the intrest is.\n";
            }
        }
    return input_of_yearly_intrest;
}
//method that will ask for the loan option that they want
int debtor::inLoanOption(){
    int input_of_loan_option=1;
    bool validInput=false;//bool so that there can be error checking
    while(!validInput){
        cout<<"We offer three different loans options 5 year, 10 year,and 15 year which loan option do you want?";
        cin>>input_of_loan_option;
        if((input_of_loan_option == 5|| input_of_loan_option == 10 || input_of_loan_option==15) && !(cin.fail())){//input has to either be an integer that is 5,10,or 15.
        validInput=true;//while loop will exit
        }
        else{
            cin.clear();
            validInput=false;//Already is false if this case happens, but will make it clear that this is an error to anyone reading the source code.
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error please enter an integer that is either 5, 10, or 15. \n";
            }
        }
    return input_of_loan_option;
}
//method that will call on the user inputs and set the numbers in the class = to them
void debtor::in__of__all__user__inputs(){
    setLoanOption(inLoanOption());//method that is a paramter of the other method will ask for the user which loan option they want 
    setLoanAmmount(inOfPrincipalAmmount());//method that is a paramter of the other method will ask for the user how much money the loan will be 
    setYearlyIntrest(inYearlyIntrest());//method that is a paramter of the other method will ask for the user what the yearly intrest will be
}

//Method that returns the monthly payment
double debtor::amortizationCalc(double principle,double intrest,int year)
{   
    double commonThing=pow((1+(intrest/12)),(year*12));
    return principle * ((intrest/12 * commonThing)/(commonThing-1));
}
//Functions that set the private variables for the functions
    void debtor::setLoanOption(int loanOption){
        this-> loanOption = loanOption; 
    }

    int debtor::getLoanOption(){
        return loanOption;
    }

     void debtor::setLoanAmmount(double loanAmmount){
        this ->loanAmmount = loanAmmount;    
    }

    double debtor::getLoanAmmount(){
        return loanAmmount;
    }

    void debtor::setYearlyIntrest(double yearlyIntrest){
       this -> yearlyIntrest=yearlyIntrest;
    }

    double debtor::getYearlyIntrest(){
        return yearlyIntrest;
    }
    void debtor::setPaymemtPeriods(){
        this -> paymentPeriods=getLoanOption()*12;
    }
    int debtor::getPaymentPeriods(){
        return paymentPeriods;
    }

//*******************************************
//Method that will call on the method bellow and also use the get methods 
    double debtor::callOfAmortizationCalc(){
        double principle=getLoanAmmount();//setting the variables like this will make the calculations easier 
        double intrest=getYearlyIntrest();
        int year=getLoanOption();
        return amortizationCalc( principle, intrest, year);
    }


    double debtor::callOf__paymentCalculator(){
        double monthlyPayment=callOfAmortizationCalc();
        double principal=getLoanAmmount();//setting the variables like this will make the calculations easier 
        double monthlyIntrest=getYearlyIntrest()/12;
        int monthlyPaymentPeriod=getPaymentPeriods();
        return paymentCalculator(monthlyPayment,principal,monthlyIntrest,loanOption);
    }
