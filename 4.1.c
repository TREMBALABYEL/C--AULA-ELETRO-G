#include<stdio.h>
//ATIVIDADE 4.1
int main(){
    char etd = 'etd'
    char s = 's';
    char c = 'c';
    char d = 'd';
    char v = 'v';
    printf("informe seu estado civil pela primeira letra deste: ");
    scanf("%c", &etd);
    if (etd == s){printf("estado: solteiro");}
    if (etd == c){printf("estado: casado");}
    if (etd == d){printf("estado: divorciado");}
    if (etd == v){printf("estado: viuvo");}
    return 0;
}