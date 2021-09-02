#include <stdio.h>

typedef struct{
    char car;
    int peso;
}Cell;

int main(){
    Cell faixa[20], peso[20];
    int tam;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &tam);
    getchar();

    printf("Entre com uma sequencia de caracteres:\n");
    for(int i = 0; i < tam; i++){
        scanf("%c", &faixa[i].car);
        getchar();
    }

    printf("Entre com os pesos:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &peso[i].peso);
    }

    int count = 1;

    for(int i = 0; i < tam; i++){
        if(faixa[i].car == faixa[i + 1].car){
            count++;
        }
    }

    int soma = 0;

    for(int i = 0; i < count; i++){
        soma += peso[i].peso;
    }

    printf("Faixa: ");
    for(int i = 0; i < tam; i++){
        printf("%c, ", faixa[i].car);
    }

    printf("\nPesos: ");
    for(int i = 0; i < tam; i++){
        printf("%d, ", peso[i].peso);
    }

    printf("\nSoma: %d\n", soma);


    system("PAUSE");
    return 0;
}


