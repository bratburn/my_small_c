//Даны гипотенуза и катет прямоугольного треугольника. Напишите программу для нахождения второго катета и площади треугольника .//

#include <stdio.h>
#include <math.h>

int main ()
{ float hip,cata,catb,s;
   puts ("Введите значение гипотенузы:");
   scanf("%f", &hip);
   if (hip<=0) 
    {puts ("Oh no");
    return 0;
    }
   puts ("Введите значение катета:");
   scanf("%f", &cata);
   if (cata<=0)
    {puts ("Oh no");
      return 0;
     }
     if (hip<cata)
     {puts ("Oh no");
     	return 0;
     }
    catb= hip*hip-cata*cata;
    catb=sqrtf(catb);
    s=(1.0/2.0)*cata*catb;
    printf ("Значение второго катета:%f.\n Площадь треугольника:%f.", catb, s);
   return 0;
 }
     