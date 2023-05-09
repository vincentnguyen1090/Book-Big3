#include <iostream>
#include "A.h"


int main()
{
    A a, b;
    for (int i = 0; i < a.size(); ++i)
    {
        a[i] = i + 1;
    }
    std::cout << "a: "<< a << "\n";

    b = a;
    A c(a);
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    for (int i = 0; i < a.size(); ++i)
    {
        a[i] = i*10;
    }
    std::cout << "a: "<< a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    return 0;
}
