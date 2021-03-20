//написать программу для вывода таблицы умножения на заданное число х

#include <stdio.h>

int main()
{int x,a,c;
  puts ("введите множитель:\n");
  scanf ("%i", &x);
  for(a=0;
      a<11;
      a++)
       {
       	c = a*x;
       	printf("%i * %i = %i\n", a,x,c);
       }
return 0;

}
