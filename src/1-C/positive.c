#include "../header/cs50.h"
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
  return 0;
}

// Prompt user for positive integer
int get_positive_int(void)
{
  int n;
  do
  {
    n = get_int("Positive Integer:");
  } while (n < 1);
  return n;
}