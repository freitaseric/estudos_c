#include <stdio.h>

int main(void)
{
  int a, b, tmp;

  printf("Informe um número: ");
  scanf("%d", &a);
  printf("Informe outro número: ");
  scanf("%d", &b);

  tmp = b;
  b = a;
  a = tmp;

  printf("Primeiro número: %d\nSegundo número: %d\n", a, b);

  return 0;
}