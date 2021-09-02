#include <stdio.h>
#include <stdlib.h>

float * novo_vetor(float vet[]);

int main(){
    float vet[100], *v;

    //Funciona apenas com numeros inteiros
    printf("Entre com 10 valores:\n");
    for(int i = 0; i < 10; i++){
        scanf("%f", &vet[i]);
    }

    v = novo_vetor(vet);

    for(int i = 0; i < 9; i++){
        printf("%.1f, ", v[i]);
    }

    return 0;
}

float * novo_vetor(float vet[]){
    float *v = malloc(10*sizeof(float));

    for(int i = 0; i < 10; i++){
        v[i] = vet[i];
    }

    int ultimo = 10;

    for(int i = 0; i < ultimo; i++){
        if(v[i] == 0){
            for(int j = i; j < ultimo - 1; j++){
                v[j] = v[j+1];
            }
        ultimo--;
        }
    }

    return v;
}

