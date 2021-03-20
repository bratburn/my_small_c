//вводим число. если оно четное, то выводим тру. если нечетное, то фолз

#include <stdio.h>

int main()
{
    int x, d;
    puts ("Введите число:");
    scanf ("%i", &x);
    d=x%2;
    if (d==0)
    {puts ("true");
      return 0;
    }
     puts ("false");
     return 0;
    
}
