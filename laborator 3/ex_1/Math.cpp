#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <cstring>
#include <stdarg.h>

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...)
{
	va_list args; // lista de argumente
	va_start(args, count);
	int suma = 0;
	for (int i = 0; i < count; i++)
	{
		suma += va_arg(args, int);
	}
	va_end(args);
	return suma;
}
char* Math::Add(const char* s, const char* p)
{
	if (s == nullptr || p == nullptr)
		return nullptr;
	else
	{
		char* s1 = new char[100];
		strcpy(s1, s);
		strcat(s1, p);
		return s1;
	}
}