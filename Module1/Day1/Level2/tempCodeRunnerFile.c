#include <stdio.h>

void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size / 2; i += 2) {
        int temp = arr[i];
        arr[i] = arr[size - 2 - i];
        arr[size - 2 - i] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swapAlternateElements(arr, size);

    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

