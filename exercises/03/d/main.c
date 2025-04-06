#include <stdio.h>

#define FAHRENHEIT_TO_CELCIUS(f) ((f - 32) * 5) / 9

int main(void)
{
  float fahrenheit, celcius;
  printf("Informe uma temperatura em fahrenheit: ");
  scanf("%f", &fahrenheit);

  celcius = FAHRENHEIT_TO_CELCIUS(fahrenheit);

  printf("Isso fica %3.1f°C\n", celcius);

  return 0;
}