clc,clear,close all 

Collin McDevitt 
9/25/2022
Write the MATLAB code necessary to execute the function,

and then compute and display the values of f(3) and f(-2). Plot the function for values of x ranging from
-3 to +4. Include grid lines and a plot title showing the function. Plot the f(3) point using a red 5-point
star and the f(-2) point using a green asterisk on the same plot of the function. Use a 12-point marker
size for plotting these two points.Hint: Create an anonymous function and use the fplot command. Ignore any warnings about
vectorizing the function. Add the computed points to the plot produced.
Well to do this i think that i will create an anonymous function and then plot using the fplot 
Y=@(x) 5*x.^3 -14*x.^2-40*x+90;
p3=Y(3);
p2=Y(-2);
Now to display the values
fprintf('The value of f(x) at point 3 is %2.2f \n',p3)
fprintf('The value fo f(x) at point -2 is %2.2f \n',p2)
now i will plot the function on the interval 
fplot(Y,[-3,4]),grid minor,xlabel('x'),ylabel('y')
hold on
title('f(x)=5x^3-14x^2-40x+90')
plot(3,p3,'p','MarkerEdgeColor','red','MarkerSize',12)
plot(-2,p2,'*','MarkerEdgeColor','green','MarkerSize',12)





