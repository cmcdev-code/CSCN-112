#pragma once
#include <iostream>
#include <vector>

class room{
public:
//private:

    // member variables
    std::vector<double> length;
    std::vector<double> height;
    std::vector<double> width;
    std::vector<double> volume;
    bool wantsRoomsPainted;//if false won't will end the function
    double paintNeeded;
    int numberOfRooms;

public:

  //  void vectorReserveALl();

    void setNumberOfRooms(int numberOfRooms);
    int getNumberOfRooms() const;

    void printVector() const;
    room();

    void setLength(double length);
    double getLength(int index) const;
    

    void setWidth(double width);
    double getWidth(int index) const;
    

    void setHeight(double height); 
    double getHeight(int index) const;
    

    void setVolume(double voume,int index);
    double getVolume(int index) const;

    void setWantsRoomsPainted(bool wwantsRoomsPainted);
    bool getWantsRoomsPainted() const;

    void setPaintNeeded(double paintNeeded);
    double getPaintNeeded() const;

    double inputFromUserLength();
    double inputFromUserWidth();
    double inputFromUserHeight();

    void setAndCallUserInput();
    
};