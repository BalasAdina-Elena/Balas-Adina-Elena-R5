#include <iostream>
#include "math.h"
using namespace std;
int main()
{
    Math c;
    cout << c.Add(3, 4) << '\n';
    cout << c.Add(3, 4, 7) << '\n';
    cout << c.Add(3.4, 5.6) << '\n';
    cout << c.Add(3.4, 5.6, 7.8) << '\n';
    cout << c.Mul(3, 4) << '\n';
    cout << c.Mul(3, 4, 5) << '\n';
    cout << c.Mul(2.5, 2.5) << '\n';
    cout << c.Mul(1.5, 2.5, 4.5) << '\n';
    cout << c.Add( 5, 1,2,3,4,5) << '\n';
    cout << c.Add("abc", "xyz") << '\n';
}
