#include<stdio.h>
#include<conio.h>
int main();
{
int n1, n2;
  scanf(" %d \t  %d\n", &n1, &n2);
  n1 = n1 ^ n2;
  n2 = n1 ^ n2;
  n1 = n1 ^ n2;
  printf(" %d \t %d\n", n1, n2);
  return 0;
}
