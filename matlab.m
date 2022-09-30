clc,clear,close all 
Lab: Numerical Methods Assignment
Collin McDevitt
9/30/2022
Exercise #1 ... Cross-sectional Area
given the depths of water at various distanes from the shore of a river compute the corss-sectional area. 

The first thing that we will want to do is create two arrays one with the distance in the x direction and another with the distance in the y direction 
distance=0:40:440;
depth=[0,40,96,140,147,121,117,139,140,62,18,0];
Now that we have the two different values we can estimate the area by using the trapz function 
area=trapz(distance,depth);
Now to print out what the river looks like
plot(distance,-depth);grid minor
title('Profile of River Cross-Section')
xlabel('Distance from Left Shore (ft)')
ylabel('Depth (ft)')
fprintf('The cross-sectional area is %5.0f feet. \n\n',area)

clc,clear,close all
Exercise #2...Problem 9.10
Here we have the case of a rocket launch where the fuel burns for a specified length of time and we are interest in knowing the velocity at the end of the fuel burn. We are given the functions that describes the acceleration (dv/dt) and the mass as a function of time as fuel burns.

What we need to do is solve for dv/dt 

T=48000;%the thrust 
m0=2200;%initial mass
r=0.8;
b=40;
g=9.81;
t0=0;
tf=b;
Now that we have all the 




