clc,clear,close all 
Collin McDevitt
9/24/2022
Engr 133, Lab-05
Write a program to determine wheather a year is a leap year or not 
    year that is evenly divisible by 400 is a leap year 
    if divisable by 100  but 400 then not a leap year 
    if divisable by 4 but not 100 then a leap year 
    any other is not a leap year
Asking for input from user
yearInput= inputdlg(' Enter the year (4 integers):');
yearInput=str2num(yearInput{1});
extra_day=0;
Doing the calculations 
if mod(yearInput,400)==0 % mod is the remainder rounded down
    extra_day=1;
elseif mod(yearInput,100)==0%rule 2
     extra_day=0;
elseif mod(yearInput,4)==0%rule 3
    extra_day=1;
else
    extra_day=0;%if all other goes through 
end

if extra_day==1
    output='is';
else
    output='is not';
end
Now to display the results 
fprintf('The year %4.0f %s a leap year. \n \n',yearInput,output)

Exercise #2... Problem 4.24
Write a program that uses a for loop to determine the time at which an object is the closest to the origin at (0,0). Determine also the minimum distance. 

Initializing variables 
clc,clear,close all
t=0:0.01:4;%array for time 
x=6*t-12;% x coordinate array 
y=(35*t.^2)-(115*t)+156;%y cordinate array 
d=sqrt(x.^2+y.^2);% distance 
min_dist=Inf;
Doing the calculations 
for k= 1:length(t)%checks every value in the array for time 
    if(d(k)<min_dist)%replaces the min_dist if it is lower the last value
        min_dist=d(k);%replaces the min_dist if it is lower the last value
        tmin=t(k);%create time value 
    end
end% end of the loop 
now to output the results 
fprintf('The minimum distance is %6.4f. \n \n',min_dist)
fprintf('It occurs at t=%6.4f seconds. \n \n',tmin)

plot(x,y),grid minor%plot the time range
title('Proximity to (0,0) Plot')
xlabel('x(t)=6t-12'),ylabel('y(t)=35t^2-115t+156')
Now to plot which value is closet to 0,0 on the graph 
[a,b]=min(d);% getting the min distance and the index and storing it 
figure 
plot(x,y),grid minor 
hold on 
axis([x(b)-1,x(b)+1,y(b)-1,y(b)+1])% making the axis closer to the point 
plot(x(b),y(b),'h','MarkerSize',20)
title('Proximity to (0,0) Plot')
xlabel('x(t)=5t-10'),ylabel('y(t)=25t^2-120t+144')

clc,clear,close all
Exercise #3 ... Problem 4.32
We are given a function describing force as a function of time and are asked a plot over an interval defined by an undefined upper bound. 
create the variables 
clc,clear,close all
x=0;y=0;
k=0;%loop counter 
doing the calculations 
while y<19.6%upper limit of force is a condition 
    k=k+1;% loop counter is incremented 
  
    x=x+0.01;
    y(k)=20*(1-exp(-x/5));
end
xmax=x;%upper limit of time 
x=0.01:0.01:xmax;
now to display the results 
plot(x,y),grid minor,xlabel('Time(t)[m]'),ylabel('Force(F)[lbf]')
title('F=20(1-e^{-x/5}')







