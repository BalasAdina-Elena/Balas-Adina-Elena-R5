#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    Sort s1(10, 1, 50);
    cout << "sir initial : ";
    s1.Print();

    cout << "InsertSort ascendent: ";
    s1.InsertSort(false);
    s1.Print();

    int v[] = { 10, 20, 30, 4, 50, 60, 1, 3 };
    Sort s2(v, 8);
    cout << "sir initial : ";
    s2.Print();

    cout << "BubbleSort descendent: ";
    s2.BubbleSort(false);
    s2.Print();
   
    Sort s3(5, 7, 2, 9, 1, 5);
    cout << " sir initial: ";
    s3.Print();
    cout << " QuickSort ascendent: ";
    s3.QuickSort(true);
    s3.Print();

    char s[] = "11,43,10,5,70";
    Sort s4(s);
    cout << "sir initial : ";
    s4.Print();
    cout <<"BubbleSort ascendent: ";
    s4.BubbleSort(true);
    s4.Print();

    cout << "numar elemente ultimul sir : " << s4.GetElementsCount() << endl;
    cout << "Element de pe index 2 ultimul sir : " << s4.GetElementFromIndex(2) << endl;

    return 0;
	
}


