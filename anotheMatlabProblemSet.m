clc,clear,close all 
Collin McDevitt
1/10/2022
Problem Set Matlab 
Problem 9.6
A certain object moves with the velocity v(t) given in the table below. Determine the object’s position x(t) at t = 10 s if x(0) = 3.

Well to do this we will want to just take the integral and the area under the curve will be the distyance traveled. We do not know what the equation is so instead we can just estimate with what we have also we have to set the initial velocity to 3 not 0
v=[0,2,5,7,9,12,15,18,22,20,17];

Now to use the tapz function 
distance=trapz(v)+3;
fprintf('The postion of the object at time 10 sec is %3.1f',distance)

clc,clear,close all
Problem 9.9
A certain object has a mass of 150 kg and is acted on by a force The mass is at rest at t = 0. Determine the object’s velocity at t = 4 s

In order to solve this we can use the formula f=ma and then solve for the acceleration and integrate that 

We just have to solve this in matlab which we can do using the integral function
q = integral(@(x) x.^2,0,1);
velocity=integral(@(t) 16/3*(2-exp(-t).*sin(5*pi*t)),0,4);
Now to output this integral 
fprintf("The veloctity at time 4 is %2.3f m/s",velocity)

clc,clear,close all
19. Plot the estimate of the derivative dy/dx from the following data. Do this by using forward, backward, and central differences. Compare the results.

The first thing that we want to do with this problem is initilize the variables 
x=0:10;
len=length(x)
y=[0,2,5,7,9,12,15,18,22,20,17];
Now to create the first plot of the function 
subplot(2,2,1)
plot(x,y),grid minor,xlabel('x'),ylabel('y'),title('Plot of x and y')
Now that we have the values we can compute the estimate of the derivative by using the diff command of dy/dx
dydx=diff(y)./diff(x);
now to get the forward derivative estimate
dydxForward=dydx
dydxForward(len)=NaN;
now to plot the forward estimate 
subplot(2,2,2)
plot(x,dydxForward),grid minor
xlabel('x'),ylabel('dy/dx'),title('dy/dx forward estimate')
now to get the backwards estimate 
dydxBackwards=[NaN dydx];
now that we have the backwards estimate we will add it to the plot 
subplot(2,2,3)
plot(x,dydxBackwards),grid minor 
xlabel('x'),ylabel('dy/dx'),title('dy/dx backwards estimate')
now to get the central estimate 
dydxcent = (y(3:len)-y(1:len-2))./(x(3:len)-x(1:len-2));
dydxcent = [NaN dydxcent NaN];
Now we will plot the central estimate
subplot(2,2,4)
plot(x,dydxcent),grid minor 
xlabel('x'),ylabel('dy/dx'),title('dy/dx central estimate')



