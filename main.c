#include <stdio.h>

int main() {
    char Operator;
    float num1, num2, result = 0;
    printf("\n Enter equation: ");
    while (scanf("%f%c%f", &num1, &Operator, &num2) != EOF){
    switch (Operator) {
        case '+':
            printf("\n The result of %.2f + %.2f  = %.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n The result of %.2f - %.2f  = %.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n The result of %.2f * %.2f  = %.2f", num1, num2, num1 * num2);
            break;
        case '/':
            printf("\n The result of %.2f / %.2f  = %.2f", num1, num2, num1 / num2);
            break;
        default:
            printf("\n Wrong operator, try again.");
    }
        printf("\n Enter equation: ");
}
    while(scanf("%f%c%f", &num1, &Operator, &num2) == EOF) {
        printf("EOF reached, goodbye!");
    }
    }
