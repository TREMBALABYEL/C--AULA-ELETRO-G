#include<math.h>
int main(){
    float m;//montante
    float p, j, c;//periodo, juros, capital
    int t;//taxa
    printf("informe a quantidade de meses: ");
    scanf("%f", &p);
    printf("informe o capital: ");
    scanf("%f", &c);
    printf("informe os juros mensais: ");
    scanf("%f", &j);
    for ( t = 1; t <= p; t++){
        m = c*pow(((j/100)+1),t);
    printf("mes %d: %.1f\n", t, m );
    }
}