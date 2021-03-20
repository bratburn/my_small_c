//Вывести первые k чисел последовательности 2,4,8,16...
#include <stdio.h>
int main()
{int a,k,n=0;
	puts("Количество выводимых чисел:");
	scanf("%i", &k);
	for(a=1;n<k;n++)
	{
		a= a*2;
		printf("%i\n", a);
	}
 return 0;
 }
