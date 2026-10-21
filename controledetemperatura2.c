#include <stdio.h>

// Função para ler a temperatura
float lerTemperatura() {
    float temperatura;

    printf("Digite a temperatura atual do ambiente: ");
    scanf("%f", &temperatura);

    return temperatura;
}

// Função para analisar a temperatura
int analisarTemperatura(float temp) {
    const float MIN = 18.0;
    const float MAX = 25.0;

    if (temp < MIN) {
        return -1;
    } else if (temp > MAX) {
        return 1;
    } else {
        return 0;
    }
}

// Função para exibir o resultado
void exibirResultado(int status) {
    if (status == -1) {
        printf("Aquecendo...\n");
    } else if (status == 1) {
        printf("Resfriando...\n");
    } else {
        printf("Temperatura estavel.\n");
    }
}

// Funcao principal
int main() {
    float temperatura;
    int resultado;

    while (1) {
        temperatura = lerTemperatura();

        // Digite -1 para encerrar
        if (temperatura == -1) {
            printf("\nPrograma encerrado.\n");
            break;
        }

        resultado = analisarTemperatura(temperatura);
        exibirResultado(resultado);
    }

    return 0;
}