#include <stdio.h>


int circle_inside (float r, float x, float y, float wx, float wy)
{if ((wx-x) * (wx-x) + (wy-y) * (wy-y) > (r *r))
 {return 0;}
 return 1;
}

int main()
{
    float x, y, r;
    int wx, wy, sum=0;
    puts ("введите координаты центра окружности:");
    scanf ("%f ; %f", &x, &y);
    puts ("введите значение радиуса:");
    scanf ("%f", &r);
    for (wx = x-r; wx <= x+r; wx++)
    {
        for(wy = y-r; wy <= y+r; wy++)
        {
            if(circle_inside (x,y,r,wx,wy))
            sum++;
        }
        
    }
    
    printf ("Всего %i целочисленных координат", sum);
    
}
