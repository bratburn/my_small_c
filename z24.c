//8 класс, параграф 19, задание 4. выводить таблицу значений по формуле y=(x+2)/(x*x+3) с начальным значение х=-3 и с шагом h=0.5

#include <stdio.h>

int main()
{
    int k,counter=0;
    float h=0.5,x=-3.0, y;
    puts ("введите количество значений:\n");
    scanf ("%i", &k);
    for (k>0;k> counter; counter++)
    {
        y=(x+2)/(x*x+3);
        printf ("%f   %f\n", x, y);
        x= x+h;
       
    }
    
    return 0;
}
