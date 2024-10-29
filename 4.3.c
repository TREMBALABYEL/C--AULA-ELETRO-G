#include<stdio.h>
int main(){
    int x;
    int n1;
    int n2;
    int r;
    printf("qual a operacao? (1) soma (2) subtracao (3) multiplicacao (4) divisao:  ");
    scanf("%d", &x);
    printf("qual o numero 1: ");
    scanf("%d", &n1);
    printf("qual o numero 2: ");
    scanf("%d", &n2);
    if (x == 1){r = n1 + n2;printf("respota: %d", r);return 0;}
    if (x == 2){r = n1 - n2;printf("respota: %d", r);return 0;}
    if (x == 3){r = n1 * n2;printf("respota: %d", r);return 0;}
    if (x == 4){r = n1 / n2;printf("respota: %d", r);return 0;}  
}