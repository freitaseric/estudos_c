#include <stdio.h>

int main(void)
{
  float hour_value, worked_hours, discount_percent, raw_income, discount, liquid_income;
  printf("Qual o valor da hora trabalhada? ");
  scanf("%f", &hour_value);
  printf("Quantas horas trabalhadas? ");
  scanf("%f", &worked_hours);
  printf("Qual o percentual de desconto? ");
  scanf("%f", &discount_percent);
  raw_income = hour_value * worked_hours;
  discount = (discount_percent / 100) * raw_income;
  liquid_income = raw_income - discount;

  printf("Salário Bruto: %7.2f\n", raw_income);
  printf("Desconto: %7.2f\n", discount);
  printf("Salário Líquido: %7.2f\n", liquid_income);

  return 0;
}