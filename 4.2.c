#include<stdio.h>
int main(){
    int op;
    char s = 'saldo';
    char e = 'extrato';
    char q = 'saque';
    char r = 'sair';
    printf("qual operação voce quer fazer neste caixa? (1)saldo (2)extrato (3)saque (4)sair ");
    scanf("%d", &op);
    if (op == 1){printf("saldo\n");}
    if (op == 2){printf("extrato\n");}
    if (op == 1){printf("saque\n");}
    if (op == 1){printf("sair\n");return 0;}
}

   