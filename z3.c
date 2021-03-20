// Задано 3 числа. Вычислить среднее арифметическое.//

#include <stdio.h>

int main ()
{ float a, b, c, d;
   puts ("Введите три числа:");
   scanf("%f %f %f", &a, &b, &c);
    d=(a+b+c)/3;
   printf ("%f", d);
   return 0;
 }
     