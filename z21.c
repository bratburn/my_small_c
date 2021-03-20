#include <stdio.h>
#include <stdlib.h>

int main()
{ int kolvo,viigr=0,a,c;
  puts("Введите количество билетов:\n");
  scanf("%i", &kolvo);
  srand(0);
  for(a=0;a<kolvo;a++)
  { c= rand()%100;
  	printf("%d\n", c);
  	if(c%5==0)
  	{viigr++;
  	}
   }
  printf("\nВыиграло %i билетов", viigr);
  return 0;
}
