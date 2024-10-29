#include<stdio.h>
int main(){
    int sexo;
    int altura;
    float f0;
    float f1;
    printf("informe sua altura em cm para ver se seu peso e ideal:\n ");
    scanf("%d", &altura);
    printf("informe seu sexo (0)homem (1)mulher\n ");
    scanf("%d", &sexo);
    f0 = (72.7 * altura) - 58;
    f1 = (62.1 * altura) - 44.7;
    if(sexo = 0){printf("seu peso ideal é: %.2f\n", f0);return 0;}
    if(sexo = 1){printf("seu peso ideal é: %.2f\n", f1);return 0;}
    return 0;
}