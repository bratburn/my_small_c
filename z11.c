//  Дано натуральное число. Напишите программу которая проверяет является ли оно трёх значным и кратно ли оно семи //
#include <stdio.h>
int main()
{int chislo,a;
 puts("Введите любое число:");
 scanf ("%i", &chislo);
 if (chislo>=100 && chislo<1000){printf ("число трехзначное");
                                }
 else {
 	printf("число не трехзначное");
      }
 a= chislo%7;
 printf("\nch=%d, a = %i\n",chislo, a);
 if(a==0) printf("\nчисло кратно семи");
 else printf("\nчисло не кратно семи");
 return 0;
 }
