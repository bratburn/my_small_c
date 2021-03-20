//Заданы два положительных числа. Определите, верно ли, что первое число меньше второго и хотя бы одно из них является четным//


#include <stdio.h>

int main()
{
    int x, z;
    puts ("Введите два числа:");
    scanf ("%i, %i", &x, &z);
    if (x<0 || z<0) {printf ("It doesnt fits");}
    else {if (x<z && x!=z && (x%2==0 || z%2==0))
            { puts ("true");}
             else {puts ("false");}
             }
    return 0;
    
}
