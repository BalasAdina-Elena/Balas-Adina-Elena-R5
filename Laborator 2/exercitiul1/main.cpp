#include <iostream>
#include "NumberList.h"

int main()
{
	NumberList N;
	N.Init(); 
	N.Add(1);
	N.Add(7);
	N.Add(3);
	N.Add(2);
	N.Add(8);
	N.Sort();
	N.Print();
}
