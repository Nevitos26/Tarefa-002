#include <stdio.h>

int main() {
    float receita, despesa, saldo;

    printf("Insira o valor da receita: ");
    scanf("%f", &receita);

    printf("Insira o valor da despesa: ");
    scanf("%f", &despesa);

    saldo = receita - despesa;

    printf("Saldo atualizado: %.2f\n", saldo);

    return 0;
}
