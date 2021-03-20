//Дано натуральное число. Напишите программу которая проверяет является ли число четырёх значным и расположенный его цифры в порядке убывания. 
#include <stdio.h>
int main()
{int chislo,a,b,c,d;
 puts("Введите любое число:");
 scanf ("%i", &chislo);
 if (chislo>=1000 && chislo<10000)
   {a= chislo/1000;
   	b= (chislo/100)%10;
   	c= (chislo%100)/ 10;
       d=chislo%10;
   	if(a<b && b<c && c<d) printf("true");
       else puts("false");    
    }
   else puts("false");
    
 return 0;
 }
