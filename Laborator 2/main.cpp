
#include <iostream>
#include "student.h"
#include "functii.h"
int main()
{
    student s1("Maria"); 
    s1.SetMatematica(10);
    s1.SetEngleza(8);
    s1.SetIstorie(7);

    student s2("Ion");
    s2.SetMatematica(8);
    s2.SetEngleza(9);
    s2.SetIstorie(7);

    std::cout << "Media studentului 1: " << s1.Medie() << std::endl;
    std::cout << "Media studentului 2: " << s2.Medie() << std::endl;
    std::cout << "Dupa nume: " << cmp_nume(s1, s2) << std::endl;
    std::cout << "Dupa nota la matematica: " << cmp_matematica(s1, s2) << std::endl;
    std::cout << "Dupa nota la engleza: " << cmp_engleza(s1, s2) << std::endl;
    std::cout << "Dupa nota la istorie: " << cmp_istorie(s1, s2) << std::endl;
    std::cout << "Dupa medie: " << cmp_medie(s1, s2) << std::endl;

    return 0;

}
