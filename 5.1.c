//atividades 5
#include<stdio.h>
int main(){
    float f;
    float a = 0;
    float m;
    int n;//nota
    int q;//quantidade de alunos
    printf("informe a quantidade de alunos:");
    scanf("%d", &q);
    for (n = 1; n <= q; n++){printf("%d.a nota:", n);scanf("%f", &m);a = a + m;}
    f = a / q;
    printf("media igual: %.1f\n", f);
}

