#include<stdio.h>

#define MAX 100

void printArray(int *array, int size);

void swapArray(int *arrayOne, int *sizeOne, int *arrayTwo, int *sizeTwo);

void swapInt(int *intOne, int *intTwo);

int main() {

    // Define arrays
    int arrayOne[MAX], arrayTwo[MAX];

    int sizeOne, sizeTwo, i = 0;

    printf("Enter size of array one: ");
    scanf("%d", &sizeOne);

    for (i = 0; i < sizeOne; i++)
    {
        printf("Value of array one %d: ", (i + 1));
        scanf("%d", &arrayOne[i]);
    }
    
    printf("\n\nEnter size of array two: ");
    scanf("%d", &sizeTwo);

    for (i = 0; i < sizeTwo; i++)
    {
        printf("Value of array two %d: ", (i + 1));
        scanf("%d", &arrayTwo[i]);
    }

    printf(" ---- Before swapping ----- \n");
    printf("Values of array one: ");
    printArray(arrayOne, sizeOne);

    printf("Values of array two: ");
    printArray(arrayTwo, sizeTwo);

    swapArray(arrayOne, &sizeOne, arrayTwo, &sizeTwo);

    printf(" ---- After swapping ----- \n");
    printf("Values of array one: ");
    printArray(arrayOne, sizeOne);
    printf("Values of array two: ");
    printArray(arrayTwo, sizeTwo);

    return 0;
}

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

void swapArray(int *arrayOne, int *sizeOne, int *arrayTwo, int *sizeTwo) {
    int tempArray[MAX], i;

    // Copy Temp 
    for (i = 0; i < *sizeOne; i++)
    {
        tempArray[i] = arrayOne[i];
    }

    // Copy two into one
    for (i = 0; i < *sizeTwo; i++)
    {
        arrayOne[i] = arrayTwo[i];
    }

    // Copy one into two
    for (i = 0; i < *sizeOne; i++)
    {
        arrayTwo[i] = tempArray[i];
    }
    
    // Swap array size
    swapInt(sizeOne, sizeTwo);
}

void swapInt(int *intOne, int *intTwo) {
    int temp = *intOne;
    *intOne = *intTwo;
    *intTwo = temp;
}