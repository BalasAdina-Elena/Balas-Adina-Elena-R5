#define _CRT_SECURE_NO_WARNINGS
#include "functii.h"
#include <cstring>

int cmp_nume(student& s1, student& s2)
{
    int c = strcmp(s1.GetNume(), s2.GetNume());
    if (c == 0) return 0;
    if (c > 0) return 1;
    return -1;
}

int cmp_matematica(student s1, student s2)
{
    if (s1.GetMatematica() == s2.GetMatematica()) return 0;
    if (s1.GetMatematica() > s2.GetMatematica()) return 1;
    return -1;
}

int cmp_engleza(student s1, student s2)
{
    if (s1.GetEngleza() == s2.GetEngleza()) return 0;
    if (s1.GetEngleza() > s2.GetEngleza()) return 1;
    return -1;
}

int cmp_istorie(student s1, student s2)
{
    if (s1.GetIstorie() == s2.GetIstorie()) return 0;
    if (s1.GetIstorie() > s2.GetIstorie()) return 1;
    return -1;
}

int cmp_medie(student s1, student s2)
{
    if (s1.Medie() == s2.Medie()) return 0;
    if (s1.Medie() > s2.Medie()) return 1;
    return -1;
}