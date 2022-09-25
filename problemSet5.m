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
x=20, y=20
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test values where x is greater then or equal to 0 and where y is less then or equal to 0 
x=21,y=-21
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test where x is less then 0 and y is greater then or equal to 0 
x=-22,y=22
a=piecewise(x,y);
fprintf('%1.0f',a)
Now to test values where x and y are both less then 0 
x=-23,y=-23
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
for i=1:10000;
    if V(i)>=0
        Vl1(i)=V(i);
    else
        Vl1(i)=0;
    end
    if V(i)>0.6
        Vl2(i)=V(i)-0.6;
    elseif V(i)<=0.6
        Vl2(i)=0;
    end
end
Now to plot the two charts 
figure 
subplot(2,1,1);

plot(t,Vl1),grid minor,xlabel('Seconds'),ylabel('Voltage (V)')


subplot(2,1,2);
plot(t,Vl2),grid minor,xlabel('Seconds'),ylabel('Voltage (V)')

clc,clear,close all
38. One bank pays 4.5 percent annual interest, while a second bank pays 3.5 percent annual interest. Determine how much longer it will take to accumulate at least $100,000 in the second bank account if you deposit $2000 initially and $2000 at the end of each year.

This should be a simple problem to do the basic structure will just be a loop and that will compound the first bank till the dollars reaches 100,000 the another loop that will have a counter and will loop through until the other one is higher
variables
A=2000;
yearsHigherIntrest=0;
yearsLowerIntrest=0;
higherIntrest=A;
lowerIntrest=A;
Now to get the first loop to get the higherIntrest to 100,000
while(higherIntrest<100000)
    higherIntrest=higherIntrest*(1+0.045);
    yearsHigherIntrest=yearsHigherIntrest+1;
end
Now to  get how many years it takes the 2nd account to get to 100k
while(lowerIntrest<100000)
    lowerIntrest=lowerIntrest*(1+0.035);
    yearsLowerIntrest=yearsLowerIntrest+1;
end
Now to output the results 
fprintf(['It takes %1.0f more years to reach $100,000\n comounded at ' ...
    '3.5 intrest then 4.5.'],yearsLowerIntrest-yearsHigherIntrest)


