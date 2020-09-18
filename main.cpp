#include <vector.h>
#include <ordenation.h>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
    int *v = vector::generateVector(100);

    Ordenation *ord = new Ordenation();

    std::cout<<std::endl<<"--------------------------------------------------------"<<std::endl;
    std::cout<<"Bubble Sort"<<std::endl;
    vector::calcExecutionTime(std::bind(&Ordenation::bubbleSort, *ord, v, 100));

    std::cout<<"--------------------------------------------------------"<<std::endl;
    v = vector::generateVector(100);

    std::cout<<"Selection Sort"<<std::endl;

    vector::calcExecutionTime(std::bind(&Ordenation::selectionSort, *ord, v, 100));

    std::cout<<"--------------------------------------------------------"<<std::endl;



}
