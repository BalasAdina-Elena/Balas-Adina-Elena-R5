#pragma once
class Sort
{
    int* lista;
    int nr_elem;
public:
    Sort (int n, int mi, int ma);
    Sort(int n, int* lista) : nr_elem(n), lista(lista)
    { };
    Sort(int v[], int n);
    Sort(int count, ...);
    Sort(const char* s);
    ~Sort();
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};