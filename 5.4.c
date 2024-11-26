#include<stdio.h>
int main(){
    int v;//candidato
    int q;//quantidade de votos de cada
    int a;//comparação
    int qc;//quantidade de candidatos
    printf("quantidade de candidatos: \n");
    scanf("%d", &qc);
    a = -1;
    for(v = 1; v <= qc; v++){
        printf("quantidade de votos do: %d\n", v);
        scanf("%d", &q);
        if(q > a){a = q;}
    }
    printf("o candidato mais votado teve %dvotos", a);
}