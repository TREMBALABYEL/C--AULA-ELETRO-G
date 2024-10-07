#include<stdio.h>

int main(){

    int soma;
    int numero1;
    int numero2;
    printf("qual o numero 1?");
    scanf("%d", &numero1);
    printf("qual numero 2?");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    printf("a soma é:%d", soma);
    return 0;
}
