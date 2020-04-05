#include <stdio.h>


/*
Step One: Partition

Step Two: Implement QuickSort
*/

void swap(int A[], int from, int to) {
    int temp;
    temp = A[from];
    A[from] = A[to];
    A[to] = temp;
}

int partition(int A[], int high, int low) {
    int pivot, initialIndex;

    pivot = A[high];
    initialIndex = (low - 1);

    for (int j = low; j <= high; j++) {
         if(A[j] < pivot) {
            initialIndex++;
            swap(A, initialIndex, j);
         }
    }

    return initialIndex + 1;
}

void quicksort(int A[], int high, int low) {
    if (high < low) {
        return;
    }

    int p;

    p = partition(A, high, low);

    quicksort(A, low, p - 1);
    quicksort(A, p + 1, high);
}


int main () {

    int A[10] = {998,4,54,233,224,245,245,23,2,3};
    int size = 10;

    quicksort(A, size, 0);
    return 0;
}