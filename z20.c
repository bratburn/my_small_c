//Вывести числа в последовательности Фибоначчи меньше х
#include <stdio.h>
 
int main() 
{
    int n,i,fi,fb,b;
    puts("введите стоп-число:");
    scanf("%i",&n);
    fi = 1;
    fb = 1;
    printf("%i %i ",fi,fb);
    for (i=3;(fi+fb)<n; i++)
     {
        printf("%i ", fi+fb);
        b = fi;
        fi = fb;
        fb = b + fi;
    }
    return 0;
}
