#include <iostream>
using namespace std;
typedef struct no_ // criação de uma struct que ficara responsavel pela chave e pelo valor
{
int chave;
int valor;
}no;
no bd[50]; // criação de um vetor da struct
int tam = 0;
int busca(int chave) // uma função de busca recebe como parametros a chave
{
    int retorno = 0; // o codigo ira retornar 0, caso a busca não encontre e retornara 1 caso encontre
   for(int i = 0; i<= tam; i++) // a variavel i ira percorrer todo o tamanho do vetor
   {
     if(bd[i].chave == chave) // comparação entre as chaves
     retorno = 1;
   }
   return retorno;
}
int insere(int chave, int valor) // a função insere recebe como parametros a chave e o valor
{
   int retorno = 0;
   if(tam <= 50) // seo tamanho for maior do que 50 a lista estará cheia
   {
     if(busca(chave) == 0) // a chave precisa retornar falso, pois quer dizer que não existe o elemento
     {
      bd[tam].chave = chave; // inserção da chave
      bd[tam].valor = valor; // inserção do valor
      tam++; // incremento do tamanho pois foi adicionado elementos
      retorno = chave;
     }
   }    
   return retorno;
}
void imprime() // uma função simples para imprimir o vetor
{
    for(int i = 0; i < tam; i++)
    {
        printf("Valor: %d | Chave: %d \n", bd[i].valor, bd[i].chave);
    }
    cout << "----------------------------------" << endl;
}
int remove(int chave) // função remove recebe como parametro apenas a chave
{   int retorno = 0;
   
        if(busca(chave) == 1 ) // a busca nesse caso precisa retornar TRUE pois quer dizer que o elemento existe
        {
            printf("entrou");
            for(int i = 0; i<= tam; i++) 
            {
                if(bd[i].chave == chave)
                {
                    bd[i].chave = NULL; // apontando a chave para nulo
                    tam = tam - 1; // decrementando o tamanho
                    retorno = chave;
                }
            }
        }
     return retorno;
    }
   
int main() // chamada das funções
{
   printf("Chave retornada : %d \n", insere(1,2));
   imprime();
   printf("Chave retornada : %d \n", insere(2,7));
   remove(2);
   imprime();
   printf("Chave retornada : %d \n", insere(3,8));
   imprime();
   printf("Chave retornada : %d \n", insere(4,9));
   imprime();
}
