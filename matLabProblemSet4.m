clc,clear,close all
Collin McDevitt
Problem Set: User-Defined & Logical Functions Assignment
17/9/2022
3.10 An object thrown vertically with a speed 𝑣0 reaches a height ℎ at time 𝑡, where:

creating the function 
function [t1,t2] =max_height(h,v0,g)
t1=(v0+(v0^2-2*g*h)^(1/2)/g);
t2=(v0-(v0^2-2*g*h)^(1/2)/g);
    return
note two times when the hieght will be reached due to the position function being a quadratic 
creaing variabels 
h=100;Velocity=50;gravity=9.81;
calling function 
[time2,time1]=max_height(h,Velocity,gravity);
Displaying the results
fprintf('The object hit the height of %1.0f \n \n',h)
fprintf('Time1 %1.0f sec.',time1)
fprintf('\nTime2 %1.0f sec.', time2)

clc ,clear,close all 
Problem 3.17
17. The volume V and paper surface area A of a conical paper cup are given by
 and 
where r is the radius of the base of the cone and h is the height of the cone.
a. By eliminating h, obtain the expression for A as a function of r and V.
just doing some basic algabra we can get the formula 

b. Create a user-defined function that accepts R as the only argument and computes A for a given value of V. Declare V to be global within the function.
to do this we need to plug in the h for the area equation which will give this equation 

function a=area(r)
    global V
    a=pi*r*sqrt(r^2+((3*v)/(pi*r^2))^2);
    return 
c. For V = 10 in.3, use the function with the fminbnd function to compute the value of r that minimizes the area A. What is the corresponding value of the height h? Investigate the sensitivity of the solution by plotting V versus r. How much can R vary about its optimal value before the area increases 10 percent above its minimum value?
creating global variable 
global V
V=10;
Now to find the minimum r and corresponding area
[rmin,Amin]=fminbnd(@area,0.5,5);
Now to use the equation above to get the height for that radius 
height=(3*V)/(pi*rmin^2);
now to get a range of values to display the area 
rFGraph=0.5:0.01:5;
AreaForGraph=area(rFGraph);
getting an array where the values are less then the 10 percent times the area
AforGraph=Amin*1.1;%getting the ten percent times the radius 
lessThen=AreaForGraph(AreaForGraph<AforGraph);%getting the values for where the graph is bellow 1.1*area
radiusToGraph=rFGraph(AreaForGraph<AforGraph);%getting the corresponding radius values
Now to find the spots on the graph when the price is bellow the area *1.1
Now to plot the graph 
plot(rFGraph,AreaForGraph,radiusToGraph,lessThen),grid On,xlabel('Radius(r)[in]')
,ylabel('Area(A)[in^2]')
title('Area of a Conical Paper cup vs. Radius')
text(0.6,65,'V=pi*r^2*h/3=10^3 in')
text(0.6,60,'A=pi*r*sqrt(r^2+(3*V/(pi*r^2))^2)')
text(rmin,Amin-0.3,'*')
text(radiusToGraph(end)+0.1,lessThen(end)-0.1,'%10 upper Area bound')




clc,clear,close all 
4.10. The arrays price_A, price_B, and price_C given below contain the price in dollars of three stocks over 10 days.
price_A=[19,18,22,21,25,19,17,21,27,29]
price_B=[22,17,20,19,24,18,16,25,28,27]
price_C=[17,13,22,23,19,17,20,21,24,28]
now to create the arrays in code 
price_A =[19,18,22,21,25,19,17,21,27,29];
price_B =[22,17,20,19,24,18,16,25,28,27];
price_C =[17,13,22,23,19,17,20,21,24,28];
a. Use MATLAB to determine how many days the price of stock A was above both the price of stock B and the price of stock C.
Well this should be pretty simple to do we did a problem that was simalr in the lab the only difference here is the extra parameter that it be above both prices 
A_GreaterthenCandA=find((price_A>price_B) & (price_A>price_C));
NumberOfDays=length(price_A);
numberOFDaysA=length(A_GreaterthenCandA);

Displaying results for B 
fprintf('The price of stock A was compared for %2.0f days .\n \n',NumberOfDays)
fprintf('The number of days that the price of A was greater then stocks B and C is %2.0f. \n',numberOFDaysA)






















