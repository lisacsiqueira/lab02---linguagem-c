#include <stdio.h>
#include<stdbool.h>

int main(void) {

  /*Exercício 1: Escreva um progama que recebe um número inteiro negativo e um número decimal positivo. Em seguida, converta o primeiro número em um decimal e o decimal em inteiro, testando pelo menos dois tipos diferentes de conversões. Realize também uma operação combinada com atribuição com cada número após a conversão.*/
/*
  
  int inteiro, novo_int;
  float decimal, novo_decimal, operacao = 10.0;
  

  do{
    printf("Digite um numero inteiro negativo: ");
    scanf("%d",&inteiro);
  }while(inteiro >= 0);

  printf("Digite um numero decimal: ");
  scanf("%f", &decimal);

  novo_int = decimal;
  novo_decimal = inteiro;
  operacao += novo_decimal;
  operacao -= novo_int;

  printf("os numeros agora são:\n%d\n%.2f", novo_int, novo_decimal);
  
  printf("\n\na operação entre elas é: %.2f", operacao);
  */
  
  

  /*Exercício 2: Verifique qual o resultado, dado o número 'a' fornecidos pelo usuário, das seguintes operações:

    a = 5; b = a * (a++);
    a = 5; b = a * ++a;
    a = 5; b = a * a++;
*/
/*
  int a, b, op1, op2, op3;
  printf("digite um número: ");
  scanf("%d",&a);

  a = 5; op1 = a * (a++);
  a = 5; op2 = a * ++a;
  a = 5; op3 = a * a++;
  printf("%d\n%d\n%d\n", op1,op2,op3);
 */

  /*
Exercício 3: Faça um programa que recebe dois valores inteiros e os compara, imprimindo os resultados das comparações*/
/*
  int num1, num2;
  
  printf("Digite num 01: ");
  scanf("%d", &num1);
  
  printf("Digite num 02: ");
  scanf("%d", &num2);

  if(num1 > num2)
    printf("num1 > num2");
  else if (num1 < num2)
    printf("num1 < num2");
  else{
    printf("num1 = num2");
  }
  
 */

  /*Desafio 1: Pesquise como imprimir "true" ou "false" ao invés de 0 ou 1 usando o operador ternário ?.*/

/*Desenvlvi um código que checa se o numero recebido é maior ou menos que zero, imprimindo true ou false, respectivamente.*/
/*
  int num;
  printf("digite um numero: ");
  scanf("%d",&num);

  bool resultado = num >= 0? printf("true") : printf("false");
  
*/

  /*Exercício04*/
/*
  int num;
  printf("digite um numero: ");
  scanf("%d", &num);

  if(num >= 0)
  {
  printf("%d é positivo", num);
  }
  else
  {
    printf("%d é negativo", num);
  }

*/


  /*Desafio02*/
/*
  int turno;
  printf("\nDigite:\n1-matutino\n2-vespertino\n3-noturno\n\n");
  printf("Digite o turno: ");
  scanf("%d",&turno);
  
   if(turno == 1)
   {
     printf("Bom dia!");
   }
  else if(turno == 2)
  {
    printf("Boa tarde!");
  }
  else if(turno==3)
  {
    printf("Boa noite!");
  }
  else
  {
    printf("Entrada inválida");
  }
*/
  
  // return 0;
}