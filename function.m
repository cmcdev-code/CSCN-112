Brief summary of this function.
Detailed explanation of this function.
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
