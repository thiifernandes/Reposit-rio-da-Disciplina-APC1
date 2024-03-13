#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;
// calcular salario bruto
  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas; 
// calcular os impostos 
  float valor_imposto_de_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
// calcular o líquido
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_de_renda - valor_imposto_previdencia;

  printf("-----------------------\n");
  printf("-----ContraCheque------\n");
  printf("-----------------------\n");
  printf("salario bruto...:R$ \x1b[35m%11.2f\x1b[0m\n", valor_salario_bruto);
  printf("imposto renda...:R$ \x1b[36m%11.2f\x1b[0m\n", valor_imposto_de_renda);
  printf("imposto previ...:R$ \x1b[36m%11.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("salario liquido...:R$ \x1b[35m%11.2f\x1b[0m\n", valor_salario_liquido);
  
  return 0;
}