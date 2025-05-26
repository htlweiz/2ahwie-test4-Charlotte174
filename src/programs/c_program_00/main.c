#include <stdio.h>

int int_even_odd(int zahl1)
{
  if (zahl1 % 2 == 0)
  {
    printf("%d... gerade Zahl wurde übergeben", zahl1);
  }
  else if (zahl1 % 2 != 0)
  {
    printf("%d...ungerade Zahl wurde übergeben", zahl1);
  }
  else if (zahl1 == 0)
  {
    printf("%d... die Zahl 0 wurde übergeben", zahl1);
  }
  return zahl1;
}

int main(int argc, char **argv)
{
//Exercise 1:


//Exercise 2:
int array2[10]= {3,1,7,4,9,1,5,10,-2,2};
for (int i = 0; i <10 ; i++)
{
  printf("Zahl 1: %d \n",array2[i]);
}


  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");
}
