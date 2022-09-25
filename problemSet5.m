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









