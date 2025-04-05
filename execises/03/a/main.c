/*
  Exercício número 3A:
    . Receba quatro entradas numéricas;
    . Calcule a soma entre elas por pares de 2;
    . Calcule o produto entre elas por pares de 2;
    . Retorne os resultados para o console;
*/
#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int sum_ab, sum_ac, sum_ad, sum_bc, sum_bd, sum_cd;
  int mul_ab, mul_ac, mul_ad, mul_bc, mul_bd, mul_cd;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  printf("Digite o terceiro número: ");
  scanf("%d", &c);
  printf("Digite o quarto número: ");
  scanf("%d", &d);

  sum_ab = a + b;
  sum_ac = a + c;
  sum_ad = a + d;
  sum_bc = b + c;
  sum_bd = b + d;
  sum_cd = c + d;

  mul_ab = a * b;
  mul_ac = a * c;
  mul_ad = a * d;
  mul_bc = b * c;
  mul_bd = b * d;
  mul_cd = c * d;

  printf("\nSomas:\n");
  printf("%d + %d = %d\n", a, b, sum_ab);
  printf("%d + %d = %d\n", a, c, sum_ac);
  printf("%d + %d = %d\n", a, d, sum_ad);
  printf("%d + %d = %d\n", b, c, sum_bc);
  printf("%d + %d = %d\n", b, d, sum_bd);
  printf("%d + %d = %d\n", c, d, sum_cd);
  printf("%d + %d = %d\n", a, b, sum_cd);

  printf("\nMultiplicações:\n");
  printf("%d * %d = %d\n", a, b, mul_ab);
  printf("%d * %d = %d\n", a, c, mul_ac);
  printf("%d * %d = %d\n", a, d, mul_ad);
  printf("%d * %d = %d\n", b, c, mul_bc);
  printf("%d * %d = %d\n", b, d, mul_bd);
  printf("%d * %d = %d\n", c, d, mul_cd);

  return 0;
}