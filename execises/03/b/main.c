#include <stdio.h>

#define LITERS_PER_KM 12;

int main(void)
{
  float distance, time, speed, used_liters;

  printf("Em quanto tempo percorreu? ");
  scanf("%f", &time);
  printf("Qual foi a velocidade (média) usada? ");
  scanf("%f", &speed);

  distance = time * speed;
  used_liters = distance / LITERS_PER_KM;

  printf("Você usou %3.1f litros em sua viagem.\n", used_liters);

  return 0;
}
