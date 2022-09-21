clc,clear,close all
Collin McDevitt
Problem Set: User-Defined & Logical Functions Assignment
17/9/2022
3.10 An object thrown vertically with a speed 𝑣0 reaches a height ℎ at time 𝑡, where:

creating the function 
function [t1,t2] =max_height(h,v0,g)
t1=(v0+(sqrt(v0^2-2*g*h)))/g;
t2=(v0-(sqrt(v0^2-2*g*h)))/g;
    return
note two times when the hieght will be reached due to the position function being a quadratic 
creaing variabels 
h=100;Velocity=50;gravity=9.81;
calling function 
[time2,time1]=max_height(h,Velocity,gravity);
Displaying the results
fprintf('The object hit the height of %1.0f \n \n',h)
fprintf('Time1 %1.2f sec.',time1)
fprintf('\nTime2 %1.2f sec.', time2)

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

now to output the key parameters 
fprintf("The minimum area and minimum radius is %1.2fm^2 and %1.2fm",Amin,rmin)
fprintf("\nThe corresponding height is %1.2f m.",height)
fprintf("\nThe volume was %1.0fm^3",V)
now to get a range of values to display the area 
rFGraph=0.5:0.001:5;
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

fprintf("The lower bound for the radius is %1.2f and the higher bound is %1.2f",radiusToGraph(1),radiusToGraph(end))
fprintf("The corresponding surface area to the radius is %1.2f and %1.2f",lessThen(1),lessThen(end))


clc,clear, close all 

20. Create a function called savings_balance that determines the balance in a savings account at the end of every year for the first n years, where n is an input. The account has an initial investment A (to be provided as input; for example, enter $10,000 as 10000) and an annually compounded interest rate of r% (to be provided as input; for example, enter 3.5% as 3.5). Display the information on screen in a table in which the first column is Year and the second is Balance ($). (Test case: n = 10, A = 10000, r = 3.5. After 10 years the balance is $14,105.99.)
With an initial investment of A and interest rate r, the balance B after n years is given by:


compoundIntrest=@(A,r,n) A*(1+r/100)^n;
now to create an arraay with the initial ammount and the  number of cycles 
A=10000;
r=0.35;
n=10;
values=0:n-1;
index=1:10;
values(1)=A;
i=1;
while(i<length(values))
   values(i+1)=compoundIntrest(values(i),r,n); 
i=i+1;
end
now to print out the results 
fprintf("The ammount of money after depositing $%1.2f at %1.2f intrest ",A,r)
Table=table(index',values','VariableNames',{'Year','Balance ($)'});
disp(Table)






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
fprintf(['The number of days that the price of stock A was greater ' ...
    'then stocks B and C is %2.0f. \n'],numberOFDaysA)
b. Use MATLAB to determine how many days the price of stock A was above either the price of stock B or the price of stock C.
Just the same exact as part A but will use the or operator instead
AGreaterthenCorA=find((price_A>price_B) | (price_A>price_C));
numberOfDaysORA=length(AGreaterthenCorA);
Now to display the results
fprintf(['The number of days that the price of stock A was greater' ...
    'then stocks B or C is %2.0f. \n'],numberOfDaysORA)
c. Use MATLAB to determine how many days the price of stock A was above either the price of stock B or the price of stock C, but not both.
This will be the same procces as before but will use the excluive or 
A_GreaterthenCxorA=find(xor((price_A>price_B),(price_A>price_C)));
aGreaterxorBC=length(A_GreaterthenCxorA);
Now to display the results 
fprintf(['The number of days that the price of stock A was greater then B or C ' ...
    '\n,but not both is %2.0f'],aGreaterxorBC)


clc,clear,close all

12. The height and speed of a projectile (such as a thrown ball) launched with a speed of v0 at an angle A to the horizontal are given by


where g is the acceleration due to gravity. The projectile will strike the ground when h(t) = 0, which gives the time to hit 
Suppose that A = 40°, v0 = 35 m/s, and g = 9.81 m/s2. Use the MATLAB relational and logical operators to find the times when
a. The height is no less than 18 m.
Well the first thing that we need to do is find the interval on which the function is positive 
this will be the interval of 0 to when the object hits the ground 
due to the function being symetric at the vertex we can just use the fact that the t value of the verterx is 
 this happends exactly between the two times the function is 0 so by multiplying it by 2 we will get the 2nd time that the function is 0 which will be the equation of  now in this function the vertext would be at point  therefore the 2nd time h is 0 will be 
g=9.81;
A=40;
Velocity=35;
t=0:0.01:2*(Velocity*(sind(A)/g));
now to get the value of the height
height=Velocity*sind(A)*t-(g*t.^2)/2;
Now to find the times when the height is greater then or = 18 m
heightGreaterThen18 = t(height>=18);
displaying the results 
fprintf(['The height is greater then or equal to 18m on the interval \n from %1.3fs to %1.3fs' ...
    ' '],heightGreaterThen18(1),heightGreaterThen18(end))
b. The height is no less than 10 m and the speed is simultaneously no greater than 30 m/s. 
Well to do this we have to calculate the velocity at all the times

now to impliment this in code 
veloctyChanging=sqrt(Velocity^2-2*Velocity*g*sind(A)*t+g^2*t.^2);
now to find the interval when both the condistions are true 
heightGreaterThen10andVelocity = t(height>=10 & veloctyChanging<=30);
now to display the results 
fprintf(['The height is greater then 10m and velocity greater then 30m/s on the interval \n from %1.3fs to %1.3fs' ...
    ' '],heightGreaterThen10andVelocity(1),heightGreaterThen10andVelocity(end))




