#ifndef VECTOR_H
#define VECTOR_H

#include <ordenation.h>
#include <functional>

class vector
{
public:
    vector();

    static int* generateVector(int n);

    static void printVector(int *v, int n);

    static void calcExecutionTime(std::function<void()> const & Function);
};

#endif // VECTOR_H
