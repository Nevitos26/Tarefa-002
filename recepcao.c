#include <stdio.h>

int main() {
    int numero_de_visitantes;

    // Solicita ao usuário o número de visitantes
    printf("Por favor, insira o número de visitantes que entraram na empresa hoje: ");
    scanf("%d", &numero_de_visitantes);

    // Exibe uma mensagem de confirmação
    printf("O número de %d visitantes foi registrado com sucesso.\n", numero_de_visitantes);

    return 0;
}
