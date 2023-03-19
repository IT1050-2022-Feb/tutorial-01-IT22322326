/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
   //declare veriables
   int m1;
   int m2;
   float avg;
   //input marks
   printf("Enter a mark 1:");
   scanf("%d",&m1);
   printf("Enter a mark 2:");
   scanf("%d",&m2);
   //calculations
   avg=(m1+m2)/2.00;
   //print the average marks
   printf("Average is %.2f",avg);
  
  return 0;
}

