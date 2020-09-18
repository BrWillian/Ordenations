#include "ordenation.h"
#include <time.h>
#include <iostream>

Ordenation::Ordenation()
{

}
void Ordenation::swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Ordenation::bubbleSort(int *v, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
            }
        }
    }
}
void Ordenation::selectionSort(int *v, int n)
{
    for (int i=0; i<n; i++)
    {
        int tmp = i;
        for (int j=i+1; j<n; j++)
        {
            if(v[j] < v[tmp])
            {
                tmp = j;
            }
        }
        swap(&v[i], &v[tmp]);
    }
}
