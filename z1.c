#include <stdio.h>

int main ()

{float a,x;
  printf ("Эта программа вычисляет значение выражения a= 2x:(x^2+4)");
  puts ("\nВведите х:");
  scanf ("%f", &x);
  a=2*x/(x*x+4);
  printf("a=%f",a);
  return 0;
  
  }