

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE_ARRAY 100
using namespace std;

void insertion_sort(int  a[], int size) {
	for (int i = 0; i < size; i++)
	{
		int aux = 0;
		for (int j = i; j > 0; j--)
		{	
			
			if (a[j] < a[j - 1]) {
				aux = a[j-1];
				a[j-1] = a[j];
				a[j] = aux;
			}
			
		}
		for (int t = 0; t < size; t++) {
			cout << a[t] << " ";
		}
		cout << endl;
	}
	
}
int main()
{
	
	int vet[SIZE_ARRAY];
	int seed = time(NULL);
	for (int i = 0; i < SIZE_ARRAY; i++) {
		vet[i] = rand()%999999;
		cout << vet[i];
	}
	cout << endl;

	insertion_sort(vet, SIZE_ARRAY);

	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		cout << vet[i] << " ";
	}
}

