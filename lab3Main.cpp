#include <iostream>
#include <iomanip>
#include "employee.h"
#include <string>
using namespace std;

void menuFunction();
int menuChoice();
Employee userDefined();

int main(){








    return 0;
}
Employee userDefined(){
    string localCity(""),localName(""),localId("");
    cout<<"What is the name of the employee?\n";
    getline(cin,localName);
    cout<<"What is the name of the city? \n";
    getline(cin,localCity);
    cout<<"What is the name their ID?\n";
    getline(cin,localId);
    Employee local(localName,localCity,localId);
    return local;
}



void menuFunction(Employee& localObj){
cout<<"************************************* \n";
cout<<setw(20)<<right<<"MENU\n";
cout<<setw(20)<<left<<"Current Employee:"<<right<<localObj.getName();
cout<<endl;
cout<<"1- Switch/Open Employee File \n";
cout<<"2- Create New Employee\n";
cout<<"3- Add Score to current Employee \n";
cout<<"4- Save Current Employee Info to File \n";
cout<<"5- Print Employee Info \n";
cout<<"6- Quit";

}
int menuChoice(){
    int x=0;
    cout<<"Please select your menu choice :\n";
    cin>>x;
    while(true){
        if ((x>0) &&(x<7)&& !(cin.fail())){
            break;
        }else{
            cout<<"Error please select from one the options: Enter an int from 1-6 \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    return x;
}

