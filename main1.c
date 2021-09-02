#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

void ordena(Data vet[], int tam);

int main(){
    Data data[20];
    int n;

    printf("Quantas datas quer inserir: ");
    scanf("%d", &n);

    printf("Insira a data:\n");

    for(int i = 0; i < n; i++){
        printf("Insira o dia: ");
        scanf("%d", &data[i].dia);

        printf("Insira o mes: ");
        scanf("%d", &data[i].mes);

        printf("Insira o ano: ");
        scanf("%d", &data[i].ano);
    }

    ordena(data, n);

    for(int i = 0; i < n; i++){
        printf("%d/%d/%d\n", data[i].dia, data[i].mes, data[i].ano);
    }

    system("PAUSE");
    return 0;
}

void ordena(Data vet[], int tam){
    int i, j;
    Data aux;

    for(i = 0; i < tam -1; i++){
        for(j = 0; j < (tam - 1 - i); j++){
            if(vet[j].ano > vet[j+1].ano){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1]= aux;
            }
            else if(vet[j].ano == vet[j+1].ano){
                if(vet[j].mes > vet[j+1].mes){
                    aux = vet[j];
                    vet[j] = vet[j+1];
                    vet[j + 1]= aux;
                }
                else if(vet[j].mes == vet[j+1].mes){
                    if(vet[j].dia > vet[j+1].dia){
                        aux = vet[j];
                        vet[j] = vet[j+1];
                        vet[j + 1]= aux;
                    }
                }
            }

            else if(vet[j].mes > vet[j+1].mes){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1]= aux;
            }
            else if(vet[j].mes == vet[j+1].mes){
                if(vet[j].dia > vet[j+1].dia){
                    aux = vet[j];
                    vet[j] = vet[j+1];
                    vet[j + 1]= aux;
                }
            }

            else if(vet[j].dia > vet[j+1].dia){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1]= aux;
            }
        }
    }
}
