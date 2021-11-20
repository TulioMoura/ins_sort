

#include <iostream>
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
	const int size = 10;
	int vet[size]={3,6,4,5,8,1,9,7,2,0};
	insertion_sort(vet, size);
	for (int i = 0; i < size; i++)
	{
		cout << vet[i] << " ";
	}
}

