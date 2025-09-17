#include <stdio.h>

// Função para calcular o salário bruto
float calcular_salario_bruto(float valor_hora, float horas_trabalhadas) {
    // Multiplica o valor da hora pelo número de horas trabalhadas no mês
    return valor_hora * horas_trabalhadas;
}

// Função para calcular o desconto de 9% sobre o salário bruto
float calcular_desconto(float salario_bruto) {
    // 9% de desconto
    return salario_bruto * 0.09;
}

// Função para calcular o salário líquido
float calcular_salario_liquido(float salario_bruto, float desconto) {
    // Salário líquido = salário bruto - desconto
    return salario_bruto - desconto;
}

int main() {
    float valor_hora, horas_trabalhadas;
    float salario_bruto, desconto, salario_liquido;

    // Solicita ao usuário o valor da hora de trabalho
    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%f", &valor_hora);

    // Solicita ao usuário a quantidade de horas trabalhadas no mês
    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    // Calcula o salário bruto
    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);

    // Calcula o desconto de 9%
    desconto = calcular_desconto(salario_bruto);

    // Calcula o salário líquido
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    // Exibe os resultados
    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
