#include <math.h>
#include <stdio.h>

void calculate(int N) {
    double pi = 0;

    for (int i = 0; i < N; i++) {
        pi += 4 * ((pow(-1,i)) / (2 * i + 1));
    }
    printf("%.9f\n", pi);
}

int main() {
    int N;
    N = 800000000;
    calculate(N);
    return 0;
}
