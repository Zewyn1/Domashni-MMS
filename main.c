#include <stdio.h>
#include <math.h>
int triS(double a, double b, double c, double S, double P){
    return(S = (a+b+c)/2);
}
int main() {
    double a,b,c,S,P;
    printf("Enter the three sides:");
    while(scanf("%lf%lf%lf", &a, &b, &c)!=EOF) {
        if (a > 0 & b > 0 & c > 0) {
            S = (a + b + c) / 2;
            printf("S=%lf:", S);
            P = sqrt(S * (S - a) * (S - b) * (S - c));
            printf("P=%lf:", P);
        } else {
            printf("Wrong input, try again!");
        }
    }
    return 0;
    }

