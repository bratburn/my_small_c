#include <stdio.h>
#include <math.h>
int main ()

{float x,z,a,b;
  printf ("Эта программа вычисляет значение выражения a= 2*x/кв корень из (z*z+9)");
  puts ("\nВведите х, z:");
  scanf ("%f %f", &x, &z);
  b=sqrtf(z*z+9);
  a=x*2/b;
  printf("a=%f",a);
  return 0;
  
  }