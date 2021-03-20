//  Дано натуральное число. Напишите программу которая проверяет является ли оно трёх значным и кратна ли семи сумма его цифр

#include <stdio.h>
int main()
{int chislo,a,b,c,itog,crat;
 puts("Введите любое число:");
 scanf ("%i", &chislo);
 if (chislo>=100 && chislo<1000)
   {a= chislo/100;
   	b= (chislo%100)/10;
   	c= chislo%10;
   	itog= a+b+c;
   	crat=itog%7;
   	if(crat==0) printf("true");
    else puts("false");}
    
 return 0;
 }
