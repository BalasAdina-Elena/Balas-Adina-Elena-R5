#include "Sort.h"
#include <random>
#include <iostream>
#include <stdarg.h>
using namespace std;
Sort::Sort(int n, int mi, int ma)
{
	this->lista = new int[n];
	this->nr_elem = n;
	for (int i = 0; i < n; i++)
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distrib(mi,ma);
		lista[i] = distrib(gen);
	}
}

Sort::Sort(int v[], int n)
{
	this->lista = new int[n];
	this->nr_elem = n;
	for (int i = 0; i < n; i++)
	{
		lista[i] = v[i];
	}
}
Sort::Sort(int count, ...)
{
	this->nr_elem = count;
	this->lista = new int[count];
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
		this->lista[i] = va_arg(args, int);
	}
	va_end(args);

}
Sort::Sort( const char* s)
{
	int i = 0, j=0, n=0;
	while (s[i] != '\0')
	{
		if (s[i] == ',')
			n++;
		i++;
	}
	this->nr_elem = n + 1;
	this->lista = new int[n+1];
	i = 0;
	while (s[i] != '\0')
	{
		int c = 0;

		while (s[i] != ',' && s[i] != '\0')
		{
			c =  c * 10 + s[i] - '0';
			i++;

		}
		lista[j] = c;
		j++;
		if (s[i] == ',') 
			i++;
	}
	
}

Sort::~Sort()
{
	delete[] lista;
}

void Sort::InsertSort(bool ascendent)
{
	int temp, j;
	for (int i = 1; i < this ->nr_elem; i++)
	{
		temp = lista[i];
		j = i - 1;
		if(ascendent)
		while (j >= 0 && lista[j] < temp)
		{
			lista[j + 1] = lista[j];
			j--;
		}
		else 
			while (j >= 0 && lista[j] > temp)
			{
				lista[j + 1] = lista[j];
				j--;
			}

			lista[j + 1] = temp;
	}
}

int partitioneaza(int *lista, int p, int q, bool ascendent)
{
	int pivot = lista[q];
	int i = p - 1;
	for (int j = p; j < q; j++) {
		if ((ascendent && lista[j] <= pivot) || (!ascendent && lista[j] >= pivot)) {
			i++;
			swap(lista[i], lista[j]);
		}
	}
	swap(lista[i + 1], lista[q]);
	return i + 1;
}

void quickSort(int* lista, int p, int q, bool ascendent)
{
	int k;
	if (p < q)
	{
		k = partitioneaza(lista, p, q, ascendent);
		quickSort(lista, p, k - 1, ascendent);
		quickSort(lista, k + 1, q, ascendent);
	}
}
void Sort::QuickSort(bool ascendent)
{
	quickSort(lista, 0, this->nr_elem - 1, ascendent);
}
void Sort::BubbleSort(bool ascendent)
{
	for (int i = 0; i < this->nr_elem - 1; i++)
	{
		for (int j = 0; j < this->nr_elem - i - 1; j++)
		{
			if (ascendent)
			{
				if (this->lista[j] > this->lista[j + 1])
					swap(this->lista[j], this->lista[j + 1]);
			}
			else
			{
				if (this->lista[j] < this->lista[j + 1])
					swap(this->lista[j], this->lista[j + 1]);
			}
		}
	}
}

void Sort::Print()
{
	for (int i = 0; i < this->nr_elem; i++)
		cout << this->lista[i] <<" ";
	cout << endl;
	
}
int Sort::GetElementsCount()
{
	return this->nr_elem;
}
int Sort::GetElementFromIndex(int index)
{ 
	return this->lista[index - 1];
}

