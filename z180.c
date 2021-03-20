//Вывести первые k чисел последовательности 2,4,8,16...//
#include <stdio.h>
int main()
{int a,k;
	puts("Количество выводимых чисел:");
	scanf("%i", &k);
	for(a=1;k>0;k--)
	{
		a= a*2;
		printf("%i\n", a);
	}
 return 0;
 }
