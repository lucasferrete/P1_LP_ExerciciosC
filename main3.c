#include <stdio.h>
#include <stdlib.h>

double media(double vet[], int n, double *t);

int main() {
    double vetor[100], Nmedia;
    int n;
    double *p;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Entre com os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetor[i]);
    }

    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf("[%.1lf], ", vetor[i]);
    }

    Nmedia = media(vetor, n, &p);

    printf("\nMedia do vetor: %.1lf\n", Nmedia);
    printf("Valor mais proximo da media: %.1lf\n", p);

    system("PAUSE");
    return 0;
}

double media(double vet[], int n, double* i) {
    double Nmedia = 0;

    double AproximadoDiferenca = 0;
    int AproximadoPosicao = 0;

    for (int i = 0; i < n; i++) {
        Nmedia += vet[i];
    }
        Nmedia = Nmedia / n;


    for (int i = 0; i < n; i++) {

        double diferenca = abs(Nmedia - vet[i]);

        if(i == 0){
            AproximadoDiferenca = diferenca;
            AproximadoPosicao = i;
        }
        else if (diferenca < AproximadoDiferenca) {
            AproximadoDiferenca = diferenca;
            AproximadoPosicao = i;
        }
    }

    *i = vet[AproximadoPosicao];

    return Nmedia;
}
