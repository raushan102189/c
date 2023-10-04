#include <stdio.h>

int main() {
    printf("This is for power calculation using a for loop.\n");

    int num = 2;
    int pow = 2;
    double ans = 1.0; // Initialize ans to 1.0

    printf("Enter your number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &pow);

    for (size_t i = 0; i < pow; i++) {
        ans *= num;
    }

    printf("Result: %lf\n", ans);

    return 0;
}
