//Вывести первые k четных чисел
#include <stdio.h>
int main()
{int a,k;
	puts("Количество выводимых чисел:");
	scanf("%i", &k);
	//
	for(a=0;k>0;k--)
	{
		a=a+2;
		printf("%i\n", a);
	}
 return 0;
 }
