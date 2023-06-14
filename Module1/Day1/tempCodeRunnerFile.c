#include <stdio.h>
int bit_operations(int num, int oper_type) {
    int result = num;
    switch (oper_type) {
        case 1:
            result |= (1 << 0);  
            break;
        case 2:
            result &= ~(1 << 30); 
            break;
        case 3:
            result ^= (1 << 15); 
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return num; 
    }
    return result;
}
