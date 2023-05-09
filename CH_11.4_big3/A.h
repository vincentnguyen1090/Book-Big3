//
// Created by vince on 2/27/2023.
//

#ifndef CH_11_4_BIG3_A_H
#define CH_11_4_BIG3_A_H
#include <iostream>

class A
{
private:
    int *arr;
public:
    A();
    A(const A& a); //copy constructor
    int size();
    int& operator[](unsigned int index);
    friend std::ostream& operator<<(std::ostream& out, const A& a);
    void operator=(const A& a);
};


#endif //CH_11_4_BIG3_A_H
