//
// Created by vince on 2/27/2023.
//

#include "A.h"

A::A(const A& a) : A()
{
    *this = a;
    /*operator = (a);
    this->operator=(a);
    A::operator = (a);*/
}
int& A::operator[](unsigned int index)
{
    return *(arr + index);
}
A::A()
{
    arr = new int[10];
}
int A::size()
{
    return 10;
}
std::ostream& operator<<(std::ostream& out, const A& a)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << *(a.arr + i) << " ";
    }
    std::cout << "\n";
    return out;
}
void A::operator=(const A& a)
{
    for (int i = 0; i < 10; ++i)
    {
        *(arr + i) = *(a.arr + i);
    }
}