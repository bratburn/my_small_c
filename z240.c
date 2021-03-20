//8 класс, параграф 19, задание 4. выводить таблицу значений по формуле y=(x+2)/(x*x+3) с начальным значение х=-3 и с шагом h=0.5

#include <stdio.h>

int main()
{
    int k,x,counter=0;
    float h=0.5, y;
    x=-3;
    puts ("введите количество значений:\n");
    scanf ("%i", &k);
    for (;k> counter; counter++)
    {
        y=(x+2)/(x*x+3);
        if(x<-3.0 && x%2==0)
        {printf ("%f   %f\n", x, y);}
         
        x= x-h;
       
    }
    
    return 0;
}
