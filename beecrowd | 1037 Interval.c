
#include<stdio.h>


int main()
{
   float a;
   scanf("%f", &a);
  
     if(0<=a<=25)
    printf("Intervalo [0,25]\n");
    else if(25<=a<=50)
    printf("Intervalo (25,50]\n");
    else if(50<=a<=75)
    printf("Intervalo (50,75]\n");
    else if(75<=a<=100)
    printf("Intervalo (75,100]\n");
    else
    printf("Fora de intervalo\n");


   return 0;
}
