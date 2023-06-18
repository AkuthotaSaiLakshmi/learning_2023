#include <stdio.h>

int find_greatest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main() {
    int num1;
    int num2;
    int num3;
    printf("Enter the values of num1,num2, and num3");
    scanf("%d %d %d",&num1,&num2,&num3);

    int greatest_number = find_greatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest_number);

    return 0;
}
