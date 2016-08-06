#include<stdio.h>

int main()
{
   printf("\nThis program will take 3 integer inputs and find");
   printf("\nthe maximum, minimum, and average.\n\n");
   int a, b, c, max, min, avr;
   printf("Enter the first integer  : ");
   scanf("%d", &a);
   printf("Enter the second integer : ");
   scanf("%d", &b);
   printf("Enter the third integer  : ");
   scanf("%d", &c);

   max = a;
   if(b > max) {max = b;}
   if(c > max) {max = c;}

   min = a;
   if(b < min) {min = b;}
   if(c < min) {min = c;}

   avr = (a+b+c)/3;

   printf("\nMaximum = %d", max);
   printf("\nMinimum = %d", min);
   printf("\nAverage = %d\n\n", avr);

   return 0;
}
