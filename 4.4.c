#include<stdio.h>
int main(){
    int n1;
    int n2;
    int calculo;
    int resto;
    printf("informe os dois primeiros numeros do ano que voce nasceu: ");
    scanf("%d", &n1);
    printf("os dois ultimos numeros do ano em que voce nasceu: ");
    scanf("%d", &n2);
    calculo = (n1 + n2) / 5;
    resto = (n1 + n2) - (5 * calculo);
    if (resto = 0){printf("timido\n");return 0;}
    if (resto = 1){printf("sonhador\n");return 0;}
    if (resto = 2){printf("paquerador\n");return 0;}
    if (resto = 3){printf("atraente\n");return 0;}
    if (resto = 4){printf("irresistivel\n");return 0;}
}