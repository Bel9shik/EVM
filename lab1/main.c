#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void calculate(int N) {
    double pi;

    for (int i = 0; i < N; i++) {
        pi += 4 * ((pow(-1,i)) / (2 * i + 1));
    }
    printf("%lf", pi);
}

int main() {
    int N;
    printf("Print the count of repeats\n");
    if (scanf("%d", &N) != 1) {
        printf("incorrect input");
        return 1;
    }
    calculate(N);
    return 0;
}
