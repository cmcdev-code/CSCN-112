clc,clear,close all
Problem Set: Branching & Looping Assignment
Collin McDevitt
9/24/2022
4.21 Create a MATLAB function called fxy to evaluate the function f(x,y) defined as follows:
function z = piecewise(x, y)
if(x>=0 && y>=0)
    z=x*y;
elseif(x>=0 && y<=0)
    z=x*y^2;
elseif(x<0&&y>=0)
    z=x^2*y;
elseif(x<0&&y<0)
    z=x^2*y^2;
end
Now to test the different values 
x=2, y=2
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test values where x is greater then or equal to 0 and where y is less then or equal to 0 
x=2,y=-2
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test where x is less then 0 and y is greater then or equal to 0 
x=-2,y=2
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test values where x and y are both less then 0 
x=-2,y=-2
a=piecewise(x,y);
fprintf('%1.0f',a)

Problem 4.31 
clc,clear,close all
31. a. An ideal diode blocks the flow of current in the direction opposite that of the diode’s arrow symbol. It can be used to make a half-wave rectifier, as shown in Figure P31a. For the ideal diode, the voltage vL across the load RL is given by


Suppose the supply voltage is

where time t is in seconds. Write a MATLAB program to plot the voltage vL versus t for .
creating the array 
t=linspace(0,10,10000);
V=3*exp(-t/3).*sin(t.*pi);
Vl1=linspace(0,10,10000);
Vl2=linspace(0,10,10000);
Now to get the array with the piecewisefunction 
for i=10000
    if V(i)>0
        Vl1(i)=V(i)
    elseif V(i)<=0
        Vl1(i)=0
    end
    







