

#include <iostream> //entrada e sa�da
#include <stdlib.h> //rand e srand
#include <time.h>  //time para seed da fun��o srand
#define SIZE_ARRAY 30//tamanho do array

using namespace std;
//definimos a fun��o insertion_sort, que recebe como par�metros um vetor de inteiros e o seu tamanho 
void insertion_sort(int  a[], int size) {
	for (int i = 0; i < size; i++) //loop externo que percorre todo o vetor elemento a elemento
	{
		int aux = 0; //variavel auxiliar
		for (int j = i; j > 0; j--) //loop interno que percorre todos os elementos anteriores ao elemento da intera��o do loop externo
		{	
			
			if (a[j] < a[j - 1]) { //compara o valor atual com cada valor anterior a ele e caso true substitui os valores
				aux = a[j - 1];
				a[j - 1] = a[j];
				a[j] = aux;
			}
			else {
				break; //no caso falso n�o � necess�rio continuar nesta estrutura de repeti��o
			}
		}
		for (int t = 0; t < size; t++) {
			cout << a[t] << " "; //apenas escreve o vetor na tela a cada intera��o do algoritimo
		}
		cout << endl;
	}
	
}
int main()
{
	
	int vet[SIZE_ARRAY]; //cria um vetor de n�meros inteiros
	int seed = time(NULL); //seed para a fun��o rand
	srand(seed);
	for (int i = 0; i < SIZE_ARRAY; i++) { //preenche o vetor com valores aleat�rios entre 0 e 999
		vet[i] = (rand()%1000)-1;
		cout << vet[i]<<" ";
	}
	cout << endl;

	insertion_sort(vet, SIZE_ARRAY); //chamada da fun��o

	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		cout << vet[i] << " "; //mostra  o vetor ordenado na tela
	}
}

