#include <stdio.h>

#define CELCIUS_TO_FAHRENHEIT(c) (9 * c + 160) / 5

int main(void)
{
  float fahrenheit, celcius;
  printf("Informe uma temperatura em celcius: ");
  scanf("%f", &celcius);

  fahrenheit = CELCIUS_TO_FAHRENHEIT(celcius);

  printf("Isso fica %3.1f°F\n", fahrenheit);

  return 0;
}