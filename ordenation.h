#ifndef ORDENATION_H
#define ORDENATION_H


class Ordenation
{
public:
    Ordenation();

    void bubbleSort(int *v, int n);
    void selectionSort(int *v, int n);
    void insertSort(int *v, int n);
    void quickSort(int *v, int l, int h);

private:
    void swap(int *a, int *b);
    int partition(int *v, int low, int high);
};

#endif // ORDENATION_H
