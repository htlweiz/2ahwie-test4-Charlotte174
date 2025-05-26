#include <stdio.h>
// Exercise 1:
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

// Exercise 3:
int int_numbers_odd_even(int int_numbers)
{
  if (int_numbers % 2 == 0)
  {
    int even_numbers = summ int_numbers;
    printf("Anzahl der geraden Zahlen: %d", even_numbers);
    return even_numbers;
  }
  else if (int_numbers % 2 != 0)
  {
    int odd_numbers = summ int_numbers;
    printf("Anzahl der ungeraden Zahlen: %d", odd_numbers);
    return odd_numbers;
  }

  int int_numbers_summ(int int_numbers)
  {
    int summ = summ int_numbers;
    printf(" Summe aller Zahlen : %d", summ)
  }
  return summ
}

int main(int argc, char **argv)
{
  // Exercise 1:
printf(int_even_odd);
  // Exercise 2:
  int array2[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d \n", i + 1, array2[i]);
  }

  // Exercise 3:
  int int_numbers[5];
  for (int i = 0; i < 5; i++)
  {
    printf("%d Zahl: ", i + 1);
    scanf("%d", &int_numbers[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", int_numbers[i]);
  }

  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");
}
