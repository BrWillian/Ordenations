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
void Ordenation::insertSort(int *v, int n)
{
    for(int i=1; i<n; i++)
    {
        int k = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > k)
        {
            v[j+1] = v[j];
            j = j - 1;
        }
        v[j+1] = k;
    }
}
int Ordenation::partition(int *v, int l, int h)
{
    int piv = v[h];
    int k = (l - 1);

    for(int i=l; i<= h - 1; i++)
    {
        if(v[i] < piv)
        {
            k++;
            swap(&v[k], &v[i]);
        }
    }
    swap(&v[k+1], &v[h]);

    return (k+1);
}
void Ordenation::quickSort(int *v, int l, int h)
{
    if(l < h)
    {
        int piv = partition(v, l, h);

        quickSort(v, l, piv-1);
        quickSort(v, piv+1, h);
    }
}
