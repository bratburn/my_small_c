//возводим число а в степень n
#include <stdio.h>
int main ()
{
    float a,n,i,s = 1 ;
    puts ("введите число:\n");
    scanf ("%f", &a);
    puts ("введите показатель степени:\n");
    scanf ("%f", &n);
    
    if(n<0){n=-n;a=1.0/a;}
    
    for (i=0;n>i;i++)
    {
       s=s*a;
    	
    } 
    printf("%f", s);
    
}
