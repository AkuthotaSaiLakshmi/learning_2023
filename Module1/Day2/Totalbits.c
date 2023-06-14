#include <stdio.h>

// Function to count the number of set bits in a number using bitwise operators
int countSetBits(unsigned int num) {
    int count = 0;
    
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

// Function to calculate the total number of set bits in the array
int countTotalSetBits(unsigned int arr[], int size) {
    int totalBits = 0;
    
    for (int i = 0; i < size; i++) {
        unsigned int num = arr[i];
        
        // Counting set bits using bitwise operators
        while (num > 0) {
            totalBits += num & 1;
            num >>= 1;
        }
    }
    
    return totalBits;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = countTotalSetBits(arr, size);
    
    printf("Total number of set bits: %d\n", result);
    
    return 0;
}