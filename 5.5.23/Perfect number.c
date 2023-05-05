//Perfect number:
#include <stdio.h>

int main() {
    int num, sum = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            if (i*i != num) {
                sum += i + num/i;
            } else {
                sum += i;
            }
        }
    }

    if (sum == num && num != 1) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
