// Write a program to add two distances (in KM -MTR) represented in the form of
// structure by passing structure to function.

#include <stdio.h>

struct Distance
{
  int km;
  float mtr;
} firstDistance, secondDistance, sum;

int main()
{
  printf("Enter km and mtr for the first distance with a space : \n");
  scanf("%d %f", &firstDistance.km, &firstDistance.mtr);

  printf("Enter km and mtr for the second distance with a space : \n");
  scanf("%d %f", &secondDistance.km, &secondDistance.mtr);

  sum.km = firstDistance.km + secondDistance.km;
  sum.mtr = firstDistance.mtr + secondDistance.mtr;

  while (sum.mtr >= 1000)
  {
    sum.mtr = sum.mtr - 1000;
    sum.km++;
  }

  printf("Sum is %d km, %.1f mtr\n", sum.km, sum.mtr);
  return 0;
}