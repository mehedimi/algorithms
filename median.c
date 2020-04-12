#include<stdio.h>

void printArray(int *array, int size) {
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if ((i + 1) != size) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
    
}

int isOdd(int N) {
    return (N % 2);
}

int main() {
    int array[100], N, i, j;

    printf("Enter size of array: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter value of %d no:", (i + 1));
        scanf("%d", &array[i]);
    }

    printf("Values of array [BEFORE SORT] ");
    printArray(array, N);


    for( int i = 0 ;i < N ; i++ ) {
        int temp = array[i];    
        int j = i;

        while(  j > 0  && temp < array[ j -1]) {
            array[j] = array[ j-1];   
            j = j - 1;

        }
        array[ j ] = temp;       
    }

    printf("Values of array [AFTER SORT] ");
    printArray(array, N);

    float median;

    if (isOdd(N)) {
        int middle = (N / 2);

        median = (array[middle]);
    } else {
        int firstMiddle, secondMiddle;

        firstMiddle = ((N / 2) - 1);
        secondMiddle = (firstMiddle + 1);

        median = ((array[firstMiddle] + array[secondMiddle]) / 2);
    }

    printf("Median is: %0.2f\n", median);
    
    return 0;
}

