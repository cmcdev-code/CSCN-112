#include <iostream>
#include <iomanip>
#include "employee.h"
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

void menuFunction(Employee& localObj);
int menuChoice();
Employee userDefined();
string fileName();
string ReadinGetLine(ifstream& in);
void allFileInput(int index,ifstream& in,Employee& loclaObj);

int main(){
Employee employee;
ifstream in;
    while(true){
        string fName="";
        menuFunction(employee);
            int menuOption=0;
            menuOption=menuChoice();



                if(menuOption==1){
                    employee.delVector();
                    employee.setCity("");
                    employee.setName("");
                    employee.setCity("");
                    
                    fName = fileName();
                    in.open(fName);
                if(in.is_open()){
                    allFileInput(0,in,employee);
                employee.printEmployeeInfo();}           
        }
        if(menuOption==2){
            employee=userDefined();
           }
        if(menuOption==5)employee.printEmployeeInfo();




        if(menuOption==6){
            break;
        }
    }





    cout<<"Program terminated succsefully";
    return 0;
}
Employee userDefined(){
    string localCity(""),localName(""),localId("");
    cout<<"What is the name of the employee? \n";
    cin.ignore();
    getline(cin,localName);
    cout<<"What is the name of the city? \n";
    cin.ignore();
    getline(cin,localCity);
    cout<<"What is the name their ID?\n";
    cin.ignore();
    getline(cin,localId);
    Employee local(localName,localCity,localId);
    return local;
}
string fileName(){
    string localfileNAme;
    cin.clear();
        cout<<"What is the name of the file include the extension ?\n";
    cin.ignore();
    getline(cin,localfileNAme);
    return localfileNAme;
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
cout<<"6- Quit \n";

}

int menuChoice(){
    int x=0;
    
    while(true){
        cout<<"Please select your menu choice :\n";
        cin>>x;
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


string ReadinGetLine(ifstream& in){
    
    string local;
    getline(in, local);
    return local;
}
void allFileInput(int index,ifstream& in,Employee& localObj){
double num=0;

while(!in.fail()&&num>=0){
if(index==0){
    localObj.setName(ReadinGetLine(in));
    localObj.setCity(ReadinGetLine(in));
    localObj.setID(ReadinGetLine(in));
    index++;
}
in>>num;
if(in.fail()&& !in.eof()){
    cout<<"A non numeric number was read in ending program. \n";
    in.close();
    exit(1);
}
else if((in.fail()&& in.eof())){
    cout<<"End of file reached. \n";
}
else if(num<1||num>5){
    cout<<"Error a number either less then 1 or greater then 5 was found terminating program \n";
    in.close();
    exit(1);
}
else{
    localObj.vectorPushBack(num);
}
    }
}
