#include <stdio.h>

struct _circle { float x, y, r;};
typedef struct _circle circle;

int circle_inside (circle c, float wx, float wy)
{if ((wx-c.x) * (wx-c.x) + (wy-c.y) * (wy-c.y) > (c.r*c.r))
 {return 0;}
 return 1;
}

int main()
{
    circle c;
    int wx, wy, sum=0;
    puts ("введите координаты центра окружности:");
    scanf ("%f ; %f", &c.x, &c.y);
    puts ("введите значение радиуса:");
    scanf ("%f", &c.r);
    for (wx = c.x-c.r; wx <= c.x+c.r; wx++)
    {
        for(wy = c.y-c.r; wy <= c.y+c.r; wy++)
        {
            if(circle_inside (c,wx,wy))
            sum++
        }
        
    }
    
    printf ("Всего %i целочисленных координат", sum);
    
}
