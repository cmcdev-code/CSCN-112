clc,clear,close all 
Collin McDevitt
9/25/2022
You've probably experienced standing on the top of a hill or a mountain and feeling like you can
see forever. How far can you really see? It depends on the height of the mountain and the radius of the earth.
The distance to the horizon is quite different on the moon than on the earth, because the radius
is different for each.
Using the Pythagorean theorem, we see that  and solving for d yields 
From this last expression, create a table that contains the distance to the horizon on the earth
and on the moon, for mountains from 0 to 8000 m in increments of 1000 m. (Mount Everest is
8850 m tall.) The radius of the earth is 6378 km and the radius of the moon is 1737 km. Display
the distance values from the table for every 1000 m of elevation rounded to two decimal places
well to do this i think that the best way to do it is to create a function that is the calculated distance 
d=@(h,r) sqrt(h.^2+2*r.*h);
height=1:1:8;%ans want it in terms of km not m
distanceEarth=round(d(height,6378),2);
distanceMoon=round(d(height,1737),2);
Now that the two arrays are calculated we can display the table 
Table= table(height',distanceEarth',distanceMoon','VariableNames' ...
    ,{'Height (km)','Earth (km)','Moon(km)'});
disp('Distance seen at different heights Earth and moon'),disp(' '),disp(Table)





