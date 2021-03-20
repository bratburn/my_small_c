#include <stdio.h>
#include <math.h>

int main()
{int dni;
 float bak,n,vsego=0;
 puts("Введите количество дней:");
 scanf("%i", &dni);
 for(n=1;n<=dni;n++)
  {bak=(n*n*n)/(sqrtf(n*n*n)-n+1);
   vsego+=bak;
  }
 printf("%f", vsego);
 
}
