#include<stdio.h>
int main(){
    int i;//ordem da idade dos pacientes
    int p;//quantidade de pacientes
    int a;//idade de cada
    int m;
    printf("informe quantos pacientes ha na clinica: ");
    scanf("%d", &p);
    m = -1;
    for (i = 1; i <= p; i++){
        printf("informe a idade: %d\n", i); scanf("%d", &a);
        if (a > m){m = a;}
    }
    printf("o mais velho e: %d\n", m);
}