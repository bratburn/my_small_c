//вывести на экран наибольшее натуральное число из просежутка [n,m], которое делится на заданное число х

#include <stdio.h>

int main()
{
  float a,x;
  int price;
  puts ("введите значение х:\n");
  scanf ("%f", &x);
  for (a=0;
       a<=1.1;
       a=a+0.10)
       {price=x*a;
        printf("%.1f кг стоит %i рублей;\n" ,a, price);
       }
  return 0;

}
