#include <stdio.h>

#define PI 3.14159

int main(void)
{
  float radius, height, volume;

  printf("Informe o raio: ");
  scanf("%f", &radius);
  printf("Informe a altura: ");
  scanf("%f", &height);

  volume = PI * radius * radius * height;

  printf("O volume é de %3.2fcm\n", volume);

  return 0;
}