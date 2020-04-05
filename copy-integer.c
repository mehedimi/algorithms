#include<stdio.h>

void swapValue(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int numOne, numTwo;

    printf("Enter the value of num one: ");
    scanf("%d", &numOne);

    printf("Enter the value of num two: ");
    scanf("%d", &numTwo);

    printf(" ---- Before swapping ----- \n");
    printf("Value of num one: %d, Value of num two: %d", numOne, numTwo);

    swapValue(&numOne, &numTwo);

    printf("\n ---- After swapping ----- \n");
    printf("Value of num one: %d, Value of num two: %d\n", numOne, numTwo);

    return 0;
}