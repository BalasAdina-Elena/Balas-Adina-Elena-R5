#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <cstring>

student::student( const char* nume): student()
{
	this->nume = new char[100];
	strcpy(this->nume, nume);
}
const char* student::GetNume()
{
	return nume;
}
student::student()
{
	nume = nullptr;
	nota_matematica = 0;
	nota_engleza = 0;
	nota_istorie = 0;
	nota_medie = 0;
}

int student::GetMatematica()
{
	return this->nota_matematica;
}

void student:: SetMatematica(int m)
{
	if (m >= 1 && m <= 10)
	this->nota_matematica = m;
	
}

int student::GetEngleza()
{
	return this->nota_engleza;
}

void student::SetEngleza(int e)
{
	if (e >= 1 && e <= 10)
	this->nota_engleza = e;
	
}
int student::GetIstorie()
{
	return this->nota_istorie;
}

void student::SetIstorie(int i)
{
	if (i >= 1 && i <= 10)
	this->nota_istorie = i;
	
}

float student::Medie()
{
	return this->nota_medie = (this->nota_matematica + this->nota_engleza + this->nota_istorie) / 3.0 ;
}