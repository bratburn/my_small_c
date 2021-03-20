//дано трехзначное число, определить вторую цифру этого числа
#include <stdio.h>
#include <math.h>

int main()
{
    int x, z, y;
    puts ("Введите трехзначное число:");
    scanf ("%i", &x);
    if ( x<100 || x>=1000 ) {printf ("It doesnt fits");}
    else { z = x % 100;
           y = z / 10;
           printf ("%i", y);
          }
    return 0;
    
}
