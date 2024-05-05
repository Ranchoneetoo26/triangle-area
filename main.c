/* autor; antonio neto
   data; 02/04/2024
   ob; ler a base e a altura do triangulo e escrever a area do mesmo.
*/


#include <stdio.h>

int main(){
    //declarar as variaveis
    float base;
    float altura;
    float area;
    
    //ler as variaveis de entrada
    
    printf("digite o valor da base");
    scanf("%f", &base);
    
    printf("digite o valor da altura");
    scanf("%f", &altura);
    
    //calcular o valor da area
    
    area =( (base * altura) /2 );
    
    //mostrar resultado
    
    printf("\n\n");
    printf("o valor da area e; %2f", area);
    
    return 0;
    
    
}