#ifndef ORDENATION_H
#define ORDENATION_H


class Ordenation
{
public:
    Ordenation();

    void bubbleSort(int *v, int n);
    void selectionSort(int *v, int n);

private:
    void swap(int *a, int *b);
};

#endif // ORDENATION_H
