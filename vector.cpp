#include "vector.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <iostream>

vector::vector()
{

}

void vector::calcExecutionTime(std::function<void()> const & Function)
{
    clock_t start, end;

    start = clock();

    Function();

    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);

    std::cout<<std::fixed<<time_taken<<std::setprecision(5)<< " sec " <<std::endl;

}
void vector::printVector(int *v, int n)
{
    for (int i=0; i<n; i++)
    {
        std::cout<<v[i];
        if(i==n)
        {
            std::cout<<std::endl;
        }else {
            std::cout<<" ";
        }
    }
}
int* vector::generateVector(int n)
{
    int *v = new int[n];

    srand (42);

    for (int i=0; i<n; i++)
    {
        v[i] = rand() % 100;
    }

    return v;
}
