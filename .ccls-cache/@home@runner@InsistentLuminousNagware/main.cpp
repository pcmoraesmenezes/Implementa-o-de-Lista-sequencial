//IMPLEMENTAÇÃO DE LISTA SEQUENCIAL
#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct no_ { //usa o typedef para colocar o nome no final, usa-se o "no" na chamda
    int valor; // criação de variavel
    int chave;
}no; // tipo
no bd[50]; // vetor da struct
int TAM = 0; // tamanho do vetor
int MAX = 50; // tamanho maximo do vetor
int busca(int chave)// a função e inteira pois retorna o valor que voce esta procurando 
{
    int busca = -1; // caso não encontre nada, retorna -1
    int i = 0; // variavel de busca
    while(i < TAM ); //repetição para percorrer o tamanho do vetor
    {
        if(bd[i].chave == chave) // condição na qual compara a chave do vetor com a chave desejada pelo usuario
        {
            busca = i; // posição do valor desejado 
            i = TAM+1; // encerrar a função
        }
        else {
            i++; // continuar percorrendo o vetor
        }
        return busca; //retorna i caso encontre e -1 caso não encontre
        
    }
}
int insere(int chave, int valor)
{
    int retorno = -1;
    int x = busca(chave);
    if(TAM < MAX){
        if( x == -1){
        bd[TAM].chave = chave;
        bd[TAM].valor = valor;
        TAM++;
         retorno =  TAM;
        }
    else 
        retorno = 0;
    }
    return retorno;
}

int remove(int chave)
{
  int teste = busca(chave);
  int retorno = -1;
  if(teste > -1) {
    while(teste < TAM)
      {
        bd[teste].chave = bd[teste +1].chave;
        bd[teste].valor = bd[teste + 1 ].valor;
        teste++;
      }
    retorno = 1;
    bd[teste].chave = 0;
    bd[teste].valor = 0;
    TAM --;
  }
  return retorno;
}
void imprime()
{
  for(int i = 0; i < TAM; i++)
    {
      printf("Valor:   %d / Chave:  %d\n", bd[i].valor, bd[i].chave);
      
    }
  printf("----------------------------\n");
}
int main()
{      
   
    printf("Valor inserido: %d\n", insere(1,2));
    imprime();
   remove(1);
    printf("Valor inserido: %d\n", insere(2,5));
  imprime();
    printf("Valor inserido: %d\n", insere(3,3));
  imprime();
    printf("Valor inserido: %d\n", insere(5,4));
  imprime();

  
}