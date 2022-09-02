#include <iostream>

class debtor
{
    
    private:
    
        //The Option that the person chose
        int loanOption;
        int paymentPeriods;

        //The loan ammount
        double loanAmmount;

        //The Yearly intrest
        double yearlyIntrest;

        //Function that will calc the Monthly payment
        double amortizationCalc(double principle,double intrest,int year);//not ment to be called instead call the double callOfAmortizationCalc();

        double paymentCalculator(double monthlyPayment,double principal,double monthlyIntrest,int loanOption);//not ment to be called call the double callOf__paymentCalculator(); instead

   public:

        //Constructor to initilize the memory when creating an object of the class 
        debtor()
            {
                loanOption = 10;//Loan Option can't == 0 because then the amortization formula would be dividing by 0 number^0 power would be 1 and the denomanator subtracts 1  
                loanAmmount = 0.0f;//f in order to show that it is a floating point 
                yearlyIntrest = 0.0f;

            }
        //Methods that will ask for the user input for the three inputs: principal ammount, loan option, and yearly interest.
        double inOfPrincipalAmmount();
        double inYearlyIntrest();
        int inLoanOption();

        //method that will call all the user inputs and then use the set methods bellow to set tha values to the corisponding ones
        void in__of__all__user__inputs();

        //Set and get methods
        //******************************************************************
        void setLoanOption(int loanOption);
        int getLoanOption();

        void setLoanAmmount(double loanAmmount);
        double getLoanAmmount();
        
        void setYearlyIntrest(double yearlyIntrest);
        double getYearlyIntrest();

        void setPaymemtPeriods();
        int getPaymentPeriods();

        //******************************************************************

        //Method that will call on the method bellow and also use the get methods 
        double callOfAmortizationCalc();

        //method that will calculate the montly payments 
        double callOf__paymentCalculator();
        
};
