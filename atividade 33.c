//atividade3.1
#include<stdio.h>
int main(){
    int folha;
    float valor;
    float valor2;
    printf("quantas copias você vai querer? ");
    scanf("%d", &folha);
    valor2 = 0.2 * folha;
    valor = 0.25 * folha;
    if (folha <= 100)
    {
        printf("com essa quantidade de folhas o preço vai ser: %.2f\n", valor);
    }

    if(folha > 100)
    {
        printf("com essa quantidade de folhas o preço vai ser: %.2f\n", valor2 );
    }
    

//atividade 3.2

    int p;
    int tp;
    printf("quantas pecas sao ao total: ");
    scanf("%d", &tp);
    printf("informe quantas pecas quebraram: ");
    scanf("%d", &p);
    if(p == 0.1 * tp){printf("a maquina precisa de manutencao!");}
    else{printf("sua maquina esta ok");}
  
//atividade 3.3

    int idade;
    printf(" informe sua idade: ");
    scanf("%d", &idade);
    if (idade <= 10){
        printf("categoria infantil");
       
    }
    if (idade <= 17){
        printf("categoria juvenil");
       
    }
    if (idade > 17){
        printf("categoria senior");
       
    }
    
    

       
//atividade 3.4

    int x;
    int y;
    int z;
    printf(" qual o lado direito x do triangulo: ");
    scanf("%d", &x);
    printf("qual o lado esquerdo y do triangulo: ");
    scanf("%d", &y);
    printf("qual o lado inferior z do triangulo: ");
    scanf("%d", &z);
    if (x == y && y == z){printf("o seu triangulo é um equilatero!");}
    if (x == y && y != z){printf("o seu triangulo é um isoceles!");}
    if (x != y && y != z){printf("o seu triangulo é escaleno!");}
    

//atividade 3.5

    int n1;
    int n2;
    int n3;
    printf(" qual o numero 1: ");
    scanf("%d", &n1);
    printf("qual o numero 2: ");
    scanf("%d", &n2);
    printf("qual o numero 3: ");
    scanf("%d", &n3);
    if (n2 > n1 && n3 > n1 && n3 > n2){printf("a ordem crescente sera: %d, %d, %d", n1, n2, n3);}
    if (n2 > n3 && n1 > n3 && n1 > n2){printf("a ordem crescente sera: %d, %d, %d", n3, n2, n1);}
    if (n1 < n3 && n3 < n2 && n2 > n3){printf("a ordem crescente sera: %d, %d, %d", n1, n3, n2);}
    if (n2 < n3 && n2 < n1 && n1 > n3){printf("a ordem crescente sera: %d, %d, %d", n2, n3, n1);}
    if (n2 < n1 && n2 < n3 && n1 < n3){printf("a ordem crescente sera: %d, %d, %d", n2, n1, n3);}
    if (n3 < n1 && n1 < n2 && n2 > n1){printf("a ordem crescente sera: %d, %d, %d", n3, n1, n2);} 
}