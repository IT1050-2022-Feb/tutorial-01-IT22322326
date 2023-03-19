/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  //veriable declaration
  int distance;
  float rupees;
  
// input distance 
  printf("Enter a distance:");
  scanf("%d",& distance);
  
  //selection
  if(distance<=30)
  {
    rupees=distance*50.00;
  }
  else
  {
    rupees=(30*50.00)+((distance-30)*40.00);
  }
  
  //print total amount
  printf("Total amount = %.2f",rupees);
  
  return 0;
}
