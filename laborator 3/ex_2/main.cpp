#include <iostream>
#include "Canvas.h"

int main()
{   
    Canvas c(30, 30);

    c.DrawRect(0, 0, 15, 15, '|');
    c.FillRect(2, 2, 10, 10, '*');

    c.DrawCircle(20, 10, 4, '@');
    c.FillCircle(5, 20, 3, '.');

    c.DrawLine(16, 16 , 25, 25, '^');

    c.SetPoint(0, 0, 'A');

    c.Print();

    c.Clear();

    return 0;
    
}

